
//Insertion Sort

#include "Sort.hpp"

/*void sort(int vetor[], int tamanho)
{
	int novo, j;
	for(int i = 1; i < tamanho; i++)
	{
		novo = vetor[i];
		j = i - 1;
		while(j >= 0 && novo < vetor[j])
		{
			vetor[j + 1] = vetor[j];
			j -= 1;
		}
		vetor[j + 1] = novo;
	}
}*/

void sort(int vetor[], int tamanho)
{
	for(int i = 1; i < tamanho; i++)
	{
		for(int j = i -1; j >= 0; j--)
		{
			if(vetor[i] < vetor[j])
			{
				vetor[j + 1] = vetor[j];
				vetor[j] = vetor[i];
			}
		}
	}
}