/*
*UNIVERSIDAD POLIECNICA DE TULANCINGO
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * ------------------------------------------------
 * Esta aplicacion muestra la serie de
 * Fibonacci con n digitos
 */
#include <stdio.h>
int dv, resta, suma,multi, n1, n2;
int main() {
    printf("esta es una calculadora basica\n");
    printf("ingresa primer numero\n");

scanf_s("%d", &n1);
printf("ingresa segundo numero\n");
scanf_s("%d", &n2);
multi = n1*n2;
dv = n1/n2;
resta = n1 - n2;
suma = n1 + n2;
printf("la suma es: %d\n", suma);
printf("la resta es: %d\n", resta);
printf("la multiplicacion es: %d\n", multi);
printf("la division es: %d\n", dv);
return 0;
}
