//solução com complexidade teta(n*log(n))

#include <iostream>


int buscaBinaria(int[], int, int);

int main(int argc, const char * argv[])
{
	int x = 5;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int r;

	for(int i = 0; i < 10; i++)
	{

		r = buscaBinaria(a, 10, x - a[i]);
		if(r == -1 || a[i] == r)
		{
			continue;
		}
		else
		{
			std::cout << a[i] << " + " << r << " = " << x << std::endl;
		}
	}


	return 0;
}


int buscaBinaria(int a[], int size, int key)
{
	int inicio = 0, fim = size - 1, meio;

	while(inicio <= fim)
	{
		meio = (inicio + fim) / 2;
		if(key > a[meio])
		{
			inicio = meio + 1;
		}
		else if (key < a[meio])
		{
			fim = meio - 1;
		}
		else
		{
			return a[meio];
		}
	}
	return -1;
}