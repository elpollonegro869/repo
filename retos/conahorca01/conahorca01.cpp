/*
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * ahorcado 2 
 */
#include <stdio.h>
#include <string.h>
void limpiar_pantalla() {

    printf("\033[2J\033[H");
    
}
int main()

{

    for (int i = 0; i < strlen(palabra); i++) {
        palabra[i] = tolower(palabra[i]);

        // Comparando por ASCII
        if (palabra[i] == 97 || palabra[i] == 101 || palabra[i] == 105 || palabra[i] == 111 || palabra[i] == 117) {
            contador++;
        }
    }

    char texto[101];
    char espejo[101];
    char letra;
    int esta = 0;

    printf("introduce un texto: ");
    scanf_s("%[^\n]", texto, (unsigned int)sizeof(texto));
    limpiar_pantalla();
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

    return 0;
}