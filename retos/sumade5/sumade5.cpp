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
    int numeros[5];
    int suma = 0;

    printf("Almacenar 5 numeros\n");

    
    for (int i = 0; i < 5; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf_s("%d", &numeros[i]);
        suma = suma + numeros[i]; 
    }

    printf("\nLos numeros son: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nLa suma total es: %d\n", suma);

    return 0;
}