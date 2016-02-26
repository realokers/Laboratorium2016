// Napisać ,,czysty'' program, czyli bez efektów ubocznych,
// działający tak samo jak powyższa pętla for.

#include<stdio.h>

int main() {
  char z;
  while ((z = getchar()) !=EOF)
  printf("%c", z)
}
