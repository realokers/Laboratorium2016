#include<stdio.h>

main()
{
  char z;
  scanf("%c", &z);
  for ( ; (z=getchar())!=EOF; printf("%c",z));
}
