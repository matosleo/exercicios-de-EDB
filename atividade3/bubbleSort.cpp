
// BubbleSort.cpp


#include "Sort.hpp"


void sort(int vetor[], int tamanho)
{
	bool mudou = true;
	int fim  = tamanho;
	while(mudou)
	{
		mudou = false;
		for(int j = 0; j < fim; j++)
		{
			if(vetor[j] > vetor[j + 1])
			{
				swap(vetor[j], vetor[j + 1]);
				mudou = true;
			}
		}
		fim -= 1;
	}
}