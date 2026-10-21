/*
*UNIVERSIDAD POLIECNICA DE TULANCINGO
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * ------------------------------------------------
 * Esta aplicacion muestra 
 * si el numero es impar o par 
 */
#include <stdio.h>

int main()
{
    int i;
    printf("numeros pares o impares\n");
    printf("ingresa un numero\n");
    scanf_s("%d", &i);

    if (i % 2 == 0) {
        printf("el numero es par\n");
    }
    else {
        printf("el numero es impar\n");
    }

    return 0;
}