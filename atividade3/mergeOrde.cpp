#include "mergeSort.hpp"

void mergeOrde(int vetor[], int esquerda, int direita)
{
	if(esquerda < direita)
	{
		int meio = (direita+esquerda)/2;
		mergeOrde(vetor, esquerda, meio);
		mergeOrde(vetor, meio+1, direita);
		merge(vetor, esquerda, meio+1, direita);
	}

}