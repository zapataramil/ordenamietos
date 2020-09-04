/*
 * ordenamientos.cpp
 *
 *  Created on: 4 sep. 2020
 *      Author: ramil
 */

#include "ordenamientos.h"

void intercambiar(int& pre, int& post){

	int aux = pre;
	pre = post;
	post = aux;
}

void burbujeo(int* vector, int tamanio){

	for(int i=0 ; i<tamanio ; i++)
		for(int j=0 ; j< tamanio-(i+1) ; j++)
			if(vector[j]>vector[j+1])
				intercambiar(vector[j],vector[j+1]);
}


