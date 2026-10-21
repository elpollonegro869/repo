/*
* UNIVERSIDAD POLITECNICA DE TULANCINGO
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * Jorge Castelan Sordo 2634919
 * ------------------------------------------------
 * datos de alumno 
 */
#include <stdio.h>
#include <iostream>
#include <conio.h>



char nombre[25];
char edad[20];
char promedio[5];

int main(void) {
	//captura datos del libro 
	printf("nombre:"); scanf_s("%24[^\n]",nombre, (unsigned int)sizeof(nombre)); getchar();
	printf("edad: "); scanf_s("%19[^d\n]",edad,(unsigned int)sizeof(edad)); getchar();
	printf("promedio: "); scanf_s("%4[^f\n]",promedio,(unsigned int)sizeof(promedio)); getchar();

	printf("el alumno %s tiene %s\n años y su calificacion es de %s\n",nombre,edad,promedio);
	return 0;
}
