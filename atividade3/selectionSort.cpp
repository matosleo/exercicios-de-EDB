
//Selection Sort

#include "Sort.hpp"

void sort(int vetor[], int tamanho)
{
	int menor;
	for(int i = 0; i < tamanho; i++)
	{
		menor = i;
		for(int j = i + 1; j < tamanho; j++)
		{
			if(vetor[menor] > vetor[j])
			{
				menor = j;
			}
		}
		swap(vetor[i], vetor[menor]);
	}
}