// Napisać program, który bada poznane typy liczbowe w C; t.zn. ustala
// ilość bajtów, przeznaczonych na zmienną (operator sizeof),
// największą i najmniejszą wartość liczby,
// ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
// ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

  printf ("DOLNA WARTOSC\n\n");
  printf ("Short: %i\n", SHRT_MIN);
  printf ("Int: %i\n", INT_MIN);
  printf ("Long: %li\n", LONG_MIN);
  printf ("Long long: %lli\n", LLONG_MIN);

  printf ("Float: %e\n", FLT_MIN);
  printf ("Double: %le\n", DBL_MIN);
  printf ("Long Double: %le\n\n\n", LDBL_MIN);

  printf ("GORNA WARTOSC\n\n");
  printf ("Short: %i\n", SHRT_MAX);
  printf ("Int: %i\n", INT_MAX);
  printf ("Long: %li\n", LONG_MAX);
  printf ("Long long: %lli\n", LLONG_MAX);

  printf ("Float: %e\n", FLT_MAX);
  printf ("Double: %le\n", DBL_MAX);
  printf ("Long Double: %le\n\n\n", LDBL_MAX);

  printf ("ziarno\n\n");
  printf ("Float: %e\n", FLT_EPSILON);
  printf ("Double: %le\n", DBL_EPSILON);
  printf ("Long Double: %le\n\n\n", LDBL_EPSILON);

  printf ("precyzja\n\n");
  printf ("Float: %e\n", FLT_DIG);
  printf ("Double: %le\n", DBL_DIG);
  printf ("Long Double: %le\n\n\n", LDBL_DIG);

}
