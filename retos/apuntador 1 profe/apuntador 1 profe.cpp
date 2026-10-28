/*
*UNIVERSIDAD POLIECNICA DE TULANCINGO
 * Ingenieria en sistemas electronicos
 * Programacion estructurada
 * A Negrete
 * ------------------------------------------------
 * aptdr
 */
#include <stdio.h>
int main() {
	int A;
	int B;
	int* aptr = &A;
	char texto[] = "holamundo";
	*aptr = 20;
	B = 15;
	printf("el valor de A es: %d y su direccion de memoria es %x\n",A,(unsigned int) aptr);
	aptr = &B;
	
	printf("el valor de b es: %dy su direccion de memoria es %x\n", B, (unsigned int)aptr);
	
	for (int i = 0;i < 10; i++) {
		printf("%c", *(texto + i));
	}
	return 0;
}