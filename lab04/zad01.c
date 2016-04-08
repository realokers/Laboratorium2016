// http://stackoverflow.com/questions/6418807/how-to-work-with-complex-numbers-in-c

#include <stdio.h>      /* Standard Library of Input and Output */
#include <complex.h>    /* Standard Library of Complex Numbers */

int main() {

    double z1rea, z2rea, z1ima, z2ima;
    printf("Podaj rea z1 :\n");
    scanf("%lf",&z1rea);
    printf("Podaj ima z1 :\n");
    scanf("%lf",&z1ima);
    printf("Podaj rea z2 :\n");
    scanf("%lf",&z2rea);
    printf("Podaj ima z2 :\n");
    scanf("%lf",&z2ima);
    double complex z1 = z1rea + z1ima * I;
    double complex z2 = z2rea + z2ima * I;
    //Wypisanie liczb zespolonych
    printf("Wartosci: Z1 = %.2f + %.2fi, Z2 = %.2f + %.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
    //Dodawanie liczb zespolonych
    double complex sum = z1 + z2;
    printf("Suma Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));
    //Odejmowanie liczb zespolonych
    double complex difference = z1 - z2;
    printf("Roznica Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));
    //Mnożenie liczb zespolonych
    double complex multiply = z1 * z2;
    printf("Roznica Z1 * Z2 = %.2f %+.2fi\n", creal(multiply), cimag(multiply));



}
