/*
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * contador vocales
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palabra[100];
    int contador = 0;

    printf("Ingresa una palabra: ");
    scanf_s("%s", palabra, 100);

    for (int i = 0; i < strlen(palabra); i++) {
        palabra[i] = tolower(palabra[i]);

        // Comparando por ASCII
        if (palabra[i] == 97 || palabra[i] == 101 || palabra[i] == 105 || palabra[i] == 111 || palabra[i] == 117) {
            contador++;
        }
    }

    printf("Tiene %d vocales\n", contador);
    return 0;
}