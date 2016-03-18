#include <stdio.h>

void funkcja(int n, int k);

int main()
{

  int a, b;
  printf("podaj liczbe a i b\n\n");
  scanf("%d", &a);
  scanf("%d", &b);

  funkcja (a, b);
}

void funkcja(int n, int k)
{
  if (k==0)
  {
    printf("Podano zla liczbe\n");
  }
  else
  {

    k!=0;
    int q, r;
    q = n/k;
    r = n%k;

    printf("Wynik dzielenia to: %d\n", q);
    printf("Reszta z dzielenia to: %d\n", r);
  }

}
