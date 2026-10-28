/*
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * ahorcado 3
 */
#include <stdio.h>
#include <string.h>

void limpiar_pantalla() {
    printf("\033[2J\033[H");
}

int main() {
    char texto[101];
    char continuar;
    char espejo[101];
    char letra;
    int esta = 0;
    int contador = 0;

    do {
        // Reiniciar en cada vuelta, si no se acumula
        esta = 0;
        contador = 0;

        printf("introduce un texto: ");
        scanf_s("%[^\n]", texto, (unsigned int)sizeof(texto));
        limpiar_pantalla();

        for (int i = 0; texto[i] != '\0'; i++) {
            if (texto[i] >= 65 && texto[i] <= 90) { // 'A' = 65 hasta 'Z' = 90
                texto[i] = texto[i] + 32; // +32 = 'a' = 97 hasta 'z' = 122
            }
        }

        for (int i = 0; i < strlen(texto); i++) {
            if (texto[i] == 97 || texto[i] == 101 || texto[i] == 105 || texto[i] == 111 || texto[i] == 117) {
                contador++;
            }
        }

        int len = strlen(texto);

        for (int j = 0; texto[j] != '\0'; j++) {
            if (texto[j] == ' ')
                espejo[j] = ' ';
            else
                espejo[j] = '_';
        }
        espejo[len] = '\0';

        printf("Introduce una letra: ");
        scanf_s(" %c", &letra, 1);

        // Letra a minuscula por ASCII para que compare bien
        if (letra >= 65 && letra <= 90) {
            letra = letra + 32;
        }

        for (int j = 0; texto[j] != '\0'; j++) {
            if (texto[j] == letra) {
                espejo[j] = letra;
                esta = 1;
            }
        }

        if (esta == 1) {
            printf("Si esta la letra '%c'\n", letra);
        }
        else {
            printf("No esta la letra '%c'\n", letra);
        }
        printf("%s\n", espejo);
        printf("Vocales: %d\n", contador);

        printf("deseas continuar? (s/n): ");
        scanf_s(" %c", &continuar, 1); // <-- CON ESPACIO, sin getchar despues

        // Pasar a minuscula por ASCII
        if (continuar >= 65 && continuar <= 90) {
            continuar = continuar + 32;
        }

        // Limpiar el Enter que queda para que el siguiente texto si se pueda escribir
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        limpiar_pantalla();

    } while (continuar == 's');

    printf("Programa terminado. Gracias!\n");
    return 0;
}