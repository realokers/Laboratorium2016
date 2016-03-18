// Napisałem program, który:
// * wczytuje dzień (między 1 a 31), miesiąc (między 1 a 12) i rok (liczbę całkowitą dodatnią, niewiększą niż 223−1),
// * wszystkie trzy dane pakuje do jednej 32-bitowej liczby całkowitej,
// * drukuje tą liczbę.
// Program wydrukował liczbę 1032225. Co to była za data?
// Napisać program, który potrafi odczytać datę z każdej liczby, zestawionej w podany wyżej sposób.

#include <stdio.h>
void date(int x)
{
  int i, l=0, bin=1;
  int tab[32];
  int y=0, m=0, d=0;
  while(x!=0)
  {
    tab[l]=x%2;
    x=x/2;
    l++;
  }
  for(i=0;i<5;i++)
  {
    d+=tab[i]*bin;
    bin*=2;
  }
  if(d==0) d=1;
  bin=1;
  for(i=5;i<9;i++)
  {
    m+=tab[i]*bin;
    bin*=2;
  }
  if(m==0) m=1;
  if(m>12) m=12;
  bin=1;
  for(i=9;i<l;i++)
  {
    y+=tab[i]*bin;
    bin*=2;
  }
  printf("%i.%i.%i\n", d, m, y);
}
int main()
{
  int x;
  scanf("%i", &x);
  date(x);
  return 0;
}
