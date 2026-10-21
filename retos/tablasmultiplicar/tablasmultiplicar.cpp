/*
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * datos de alumno
 */
#include <stdio.h>

int main()
{
    int num, i;

    printf("Tabla de multiplicar\n");
    printf("Ingresa un numero: ");
    scanf_s("%d", &num);

    printf("\nTabla del %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}