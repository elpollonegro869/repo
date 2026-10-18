/*
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 *Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * Esta aplicacion muestra cual es el mayor
 * de 3 numeros distintos a, x, b
 */
#include <stdio.h>

int main() {
    int a, x, b;

    printf("Ingrese 3 numeros a, x, b\n");
    scanf_s("%d %d %d", &a, &x, &b);

    if (a > x) {
        if (b > a) {
            printf("resultado: %d\n", b);
        }
        else {
            printf("resultado: %d\n", a);
        }
    }
    else {
        if (x > b) {
            printf("resultado: %d\n", x);
        }
        else {
            printf("resultado: %d\n", b);
        }
    }

    return 0;
}