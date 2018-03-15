//
//  RecLinearSearch.cpp
//  Recursive Linear Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{
    // TO DO

	if(size == 0)
	{
		return -1;
	}

	if(v[size - 1] == key)
	{
		return size - 1;
	}

	return search(v, size - 1, key);
}

// Está dando 'Falha de Segmentação'. Tirar dúvida com o professor.
// Em testes para vetores menores deu certo.