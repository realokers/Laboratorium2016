#include <stdio.h>

#define CZYT(liczba, typ)\
 printf("Podaj wartosc "#liczba": ");\
 scanf("%"#typ, &liczba);

int main ()
{
  int a;
  double b;
  CZYT(a, i);
  CZYT(b, lf);
  printf("%i\n", a);
  printf("%lf\n", b);
}
