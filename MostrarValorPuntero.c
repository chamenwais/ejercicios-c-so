/*
 * MostrarValorPuntero.c
 *
 *  Created on: 11 ago. 2018
 *      Author: faromero
 */
#include <stdio.h>

int main(){
	int p= 10;
	int * PInteger = &p;
	printf("El contenido de p es: %d\n", *PInteger);
	return 0;
}

