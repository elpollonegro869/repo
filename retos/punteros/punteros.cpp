/*
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * puntero
 * 
 */
#include <stdio.h>

 // Función que recibe dos punteros
void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Antes: x = %d, y = %d\n", x, y);

    intercambiar(&x, &y); // se pasan las direcciones con &

    printf("Despues: x = %d, y = %d\n", x, y);

    return 0;
}