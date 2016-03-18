//Sprawdzić, wykonując odpowiednie testy, jak działają operacje rzutowania z typów ,,mniejszych'' do ,,większych'' i odwrotnie.

#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
  printf("Konwersja liczb\n\n");

  printf("Max_liczba_float w konwersji do int: '%e' do '%i' \n", FLT_MAX, (int)FLT_MAX);
  printf("Max_liczba_double w konwersji do int: '%e' do '%i' \n", DBL_MAX, (int)DBL_MAX);
  printf("Max_liczba_long_double w konwersji do double: '%Le' do '%e' \n", LDBL_MAX, (double)LDBL_MAX);
  printf("Max_liczba_int w konwersji do float: '%i' do '%e' \n", INT_MAX, (float)INT_MAX);
  printf("Max_liczba_long_long w konwersji do double: '%lli' do '%e' \n", LLONG_MAX, (double)LLONG_MAX);
  printf("Min_liczba_float w konwersji do short: '%e' do '%i' \n", FLT_MIN, (short)FLT_MIN);
}
