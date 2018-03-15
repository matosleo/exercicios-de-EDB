//
//  RecBinSearch.cpp
//  Recursive Binary Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{
    // TO-DO
    int inicio = encontra_inicio(v, size, key);

    if(v[inicio] == key)
    {
    	return inicio;
    }

    if(inicio > size - 1)
    {
    	return -1;
    }

    int meio = (inicio + (size - 1))/2;

    if(key < v[meio])
    {
    	return search(v, meio - 1, key);
    }
    else if(key > v[meio])
    {
    	return search(v, meio + 1, key);
    }
    else
    {
    	return meio;
    }
    
}
