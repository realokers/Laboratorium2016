// Napisać program, który wczytuje tekst aż do EOF, a następnie drukuje bitowe obrazy wczytanych znaków.

#include <stdio.h>
void dec_bin(int x)
{
  int tab[10];
  int a=0;
  while(x!=0)
  {
    tab[l]=x%2;
    x=x/2;
    a++;
  }
  while(a>0)
  {
    a--;
    printf("%i", tab[a]);
  }
  printf("\n");
}
int main()
{
  char c;
  c=getchar();
  while(c!=EOF)
  {
    if(c!='\n') dec_bin(c);
    c=getchar();
  }
  return 0;
}
