// MergeSort.cpp


#include "Sort.hpp"
#include "mergeSort.hpp"

void sort(int vetor[], int tamanho)
{
	int esquerda = 0, direita = tamanho -1;
	mergeOrde(vetor, esquerda, direita);

}