/**
 *
 * Descripcion: Implementacion de funciones de ordenacion 
 *
 * Fichero: ordenacion.c
 * Autores: Victoria Pelayo e Ignacio Rabuñal
 * Version: 1.1
 * Fecha: 12-10-2017
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "ordenacion.h"
#include "permutaciones.h"

/***************************************************/
/* Funcion: BubbleSort Fecha: 12-10-2017           */
/* Autores: Victoria Pelayo e Igacio Rabuñal       */
/*                                                 */
/* Ordena números de menor a mayor de una tabla    */
/* dada entre la posicion ip e iu                  */
/*                                                 */
/* Entrada:                                        */
/* int* tabla: tabla que se va a ordenar           */
/* int ip: posición desde donde se va a ordenar    */
/* int iu: posición hasta donde se va a ordenar    */
/* Salida:                                         */
/* int: numero de veces que se ha realizado la ob  */
/***************************************************/
int BubbleSort(int* tabla, int ip, int iu){	
	int ob = 0;
	int i;
	int flag = 1;
	
	i = iu;
	
	if (tabla == NULL) return ERR;

	while (flag == 1 && i >= ip + 1) {
		int j;
		flag = 0;
		for (j = ip; j <= i - 1; j++){
			ob++;
			if (tabla[j] > tabla[j+1]){
				swap(&tabla[j], &tabla[j + 1]);
				flag = 1;
			}
		}
		i--;
	}

	return ob;
}

