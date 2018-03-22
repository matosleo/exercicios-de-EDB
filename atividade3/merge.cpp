#include "mergeSort.hpp"


void merge(int v[], int inicio1, int inicio2, int fim2)
{
	int fim1 = inicio2-1, i = inicio1, j = inicio2, k = 0; 
	
	const int size = fim2;
	int tmp[size];

	while(i <= fim1 && j <= fim2)
	{
		if(v[i] < v[j])
		{
			tmp[k] = v[i];
			i++;
		}
		else
		{
			tmp[k] = v[j];
			j++;
		}
		k++;
	}
	while(i <= fim1)
	{
		tmp[k] = v[i];;
		i++;
		k++;
	}
	while(j <= fim2)
	{
		tmp[k] = v[j];
		j++;
		k++;
	}

	for(i = inicio1, j = 0; i <= fim2; i++, j++)
	{
		v[i] = tmp[j];
	}

}