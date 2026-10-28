/*
*UNIVERSIDAD POLIECNICA DE TULANCINGO
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * ------------------------------------------------
 * Esta aplicacion muestra el caracter buscado
 */
#include <stdio.h>
#include <string.h>

int main() {
    char texto[201]; 
    char buscar;
    int contador = 0;

    printf("Ingresa un texto (max 200 caracteres):\n");
    
    fgets(texto, 200, stdin);

    
    texto[strcspn(texto, "\n")] = '\0';

    
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 65 && texto[i] <= 90) { 
            texto[i] = texto[i] + 32; 
        }
    }

    printf("\nTexto en minusculas: %s\n", texto);

   
    printf("\nIngresa el caracter a buscar: ");
    scanf_s("%c", &buscar);

    
    if (buscar >= 65 && buscar <= 90) {
        buscar = buscar + 32;
    }

    
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == buscar) {
            contador++;
        }
    }

    printf("El caracter '%c' se encontro %d veces.\n", buscar, contador);

    return 0;
}