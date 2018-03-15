//
//  encontra_inicio.hpp
//
//  Created by Leonardo Matos
//

#include "Search.hpp"

int encontra_inicio(int v[], int size, int key)
{
	int inicio = 0, meio = ((size - 1) + inicio) / 2;

	if(key > v[meio])
	{
		return inicio = meio + 1;
	}
	else if (key == meio)
	{
		return meio;
	}
	else
	{
		return inicio;
	}
}

