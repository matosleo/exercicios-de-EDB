// solução com complexidade teta(n²)

#include <iostream>

int main(int argc, const char * argv[])
{

	int x = 4;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i = 0; i < 10; i++)
	{
		for(int j = i + 1; j < 10; j++)
		{
			if(a[i] + a[j] == x)
			{
				std::cout << a[i] << " + " << a[j] << " = " << x << std::endl;
			}
		}
	}



	return 0;
}