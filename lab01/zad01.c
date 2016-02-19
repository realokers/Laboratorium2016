// Napisać
// 1. program w C, który wczytuje liczbę naturalną i przekazuje systemowi
// operacyjnemu (przez return w main-ie) resztę z dzielenia tej liczby przez 3;
// 2. skrypt bashowy, który uruchamia powyższy program, przechwytuje wartość
// przekazaną systemowi i drukuje ją.
#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);
  //printf("%d\n", n);

  return n % 3;
}
