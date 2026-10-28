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


    do {

        esta = 0;


        printf("introduce un texto: ");
        scanf_s("%[^\n]", texto, (unsigned int)sizeof(texto));
        limpiar_pantalla();

        for (int i = 0; texto[i] != '\0'; i++) {
            if (texto[i] >= 65 && texto[i] <= 90) {
                texto[i] = texto[i] + 32;
            }
        }

        for (int i = 0; i < strlen(texto); i++) {
            if (texto[i] == 97 || texto[i] == 101 || texto[i] == 105 || texto[i] == 111 || texto[i] == 117) {

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


        printf("deseas continuar? (s/n): ");
        scanf_s(" %c", &continuar, 1);


        if (continuar >= 65 && continuar <= 90) {
            continuar = continuar + 32;
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        limpiar_pantalla();

    } while (continuar == 's');


    return 0;
}