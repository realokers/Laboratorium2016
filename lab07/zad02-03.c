// Proszę napisać program porzadkuj.c, którego wywołanie np. takie:   ./porzadkuj jedna_z_baz wynik_porzadkowania
// posortuje wskazaną bazę jedna_z_baz (alfabetycznie wg nazwisk, a dla równych nazwisk wg imion)
// i zapisze wynik sortowania na nowo utworzony plik   wynik_porzadkowania.
// W programie z zadania 2 wymienić funkcję sortowanie na możliwie szybko działającą (np. bubble-sort na merge-sort).
// Dla oceny szybkości działania programu można zaraz przed rozpoczęciem sortowania umieścić komendę: clock_t  pocz = clock();

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define IMIE_MAX 20
#define NAZW_MAX 20
#define IL_OSOB 10000

typedef struct
{
  char imie[IMIE_MAX+1];
  char nazwisko[NAZW_MAX+1];
  int pensja;
} osoba;
osoba spis[IL_OSOB];

//=======================================================

void create_list(char *name, int *linie)
{
  FILE *base = fopen(name, "r");
  if(base == NULL) printf("\nBaza danych jest PUSTA!\n\n");
  int i;
  for(i = 0; i < *linie; i++)
  {
    fscanf(base, "%s", spis[i].imie);
    fscanf(base, "%s", spis[i].nazwisko);
    fscanf(base, "%i", &spis[i].pensja);
  }
  fclose(base);
}

//=======================================================

int lines(char *name)
{
  int linie = 0;
  FILE* plik;
  plik = fopen(name, "r");
  int w;
  do
  {
    fscanf(plik, "%s", spis[linie].imie);
    fscanf(plik, "%s", spis[linie].nazwisko);
    w = fscanf(plik, "%i", &spis[linie].pensja);
    linie++;
  } while(w != EOF);
  fclose(plik);
  return linie-1;
}

//=======================================================

int comparison(const void *a, const void *b)
{
  osoba *osoba_a, *osoba_b;
  osoba_a = (osoba *) a;
  osoba_b = (osoba *) b;
  return strcmp(osoba_a->nazwisko, osoba_b->nazwisko);
}

//=======================================================

void qsort(int *linie)
{
  qsort(spis, *linie, sizeof(osoba), compare);
  FILE *base_qs = fopen("qsort.txt", "w");
  int i;
  for(i = 0; i < *linie; i++)
  {
    fprintf(base_qs, "%20s ", spis[i].imie);
    fprintf(base_qs, "%20s ", spis[i].nazwisko);
    fprintf(base_qs, "%20i\n", spis[i].pensja);
  }
  fclose(base_qs);
}

//=======================================================

void bubble_sort(int *linie)
{
  int i, j;
  char temp[NAZW_MAX+1];
  for(i = 1; i <= *linie; i++)
  {
    for(j = i;j < *linie; j++)
    {
      if(strcmp(spis[j-1].nazwisko, spis[j].nazwisko) > 0)
      {
        strcpy(temp, spis[j-1].nazwisko);
        strcpy(spis[j-1].nazwisko, spis[j].nazwisko);
        strcpy(spis[j].nazwisko, temp);
      }
      else if(strcmp(spis[j-1].nazwisko, spis[j].nazwisko) == 0)
      {
        strcpy(temp, spis[j-1].imie);
        strcpy(spis[j-1].imie, spis[j].imie);
        strcpy(spis[j].imie, temp);
      }
    }
  }
  FILE* base_bs = fopen("bubblesort.txt", "w");
  for(i = 0; i < *linie; i++)
  {
    fprintf(base_bs, "%20s ", spis[i].imie);
    fprintf(base_bs, "%20s ", spis[i].nazwisko);
    fprintf(base_bs, "%20i\n", spis[i].pensja);
  }
  fclose(base_bs);
}

//=======================================================

int main(int args, char* arg[])
{
  if(args == 2)
  {
    char name[100];
    sscanf(arg[1], "%s", name);
    int l;
    l = lines(name);
    if(l > IL_OSOB)
    {
      printf("Przekroczono limit osob!\n");
      return 0;
    }
    printf("Zeskanowalem %i linii z pliku %s\n", l, arg[1]);
    utworz_spis(name, &l);
    clock_t begin = clock();
    sort_qsort(&l);
    clock_t end = clock();
    printf("\nQsort wykonano w %lf sek.\n\n", (double)(end-begin)/CLOCKS_PER_SEC);
    clock_t begin2 = clock();
    sort_bubble(&l);
    clock_t end2 = clock();
    printf("\nBubblesort wykonano w %lf sek.\n\n", (double)(end2-begin2)/CLOCKS_PER_SEC);
    printf("\nBaza zostala posortowana!\n\n");
    return 0;
  } else printf("\nNiepoprawne wywolanie programu!\n");
  printf("Wywolanie programu wymaga argumentu!\n");
  printf("./zad2b nazwapliku(lub lokalizacja pliku)!\n");
  }
