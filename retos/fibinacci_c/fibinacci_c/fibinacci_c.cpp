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

int main() {
    int n, a, b, o, c;

    printf("n <- Digitos\n");
    scanf_s("%d", &n);

    a = 0;
    b = 1;
    o = 0;

    while (n > o) {
        printf( a);
        c = a + b;
        a = b;
        b = c;
        o = o + 1;
    }

    return 0;
}