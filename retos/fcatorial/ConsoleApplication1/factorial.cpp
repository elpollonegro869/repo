/*
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * Esta aplicacion muestra el
 * factorial de un numero
 */
#include <stdio.h>

int main() {
    int n, x, a;

    printf("Ingresar numero para factorial\n");
    scanf("%d", &n);

    x = 1;
    a = 1;

    while (a <= n) {
        x = a * x;
        a = a + 1;
    }

    printf("resultado: %d\n", x);

    return 0;
}