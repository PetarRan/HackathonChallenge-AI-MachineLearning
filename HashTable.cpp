#include "HashTable.h"
void HT::Add(int k)
{
	int index = h(k);
	if (tabela[index].status < 2)
	{
		tabela[index].kljuc = k;
		tabela[index].status = 2;
		tabela[index].next = -1;

	}
	else
	{
		int i = index;
		int prev = i;
		i = tabela[i].next;
		while (i != -1)
		{
			i = tabela[i].next;
		}
		tabela[prev].next = lrmp;
		tabela[lrmp].kljuc = k;  //dodavanje
		tabela[lrmp].status = 2;//u gornjoj
		i = lrmp;               // tabeli
		lrmp = tabela[lrmp].next;
		tabela[i].next = -1;

	}
}
void HT::Print()
{
	for (int i = 0; i < lenght; i++)
	{
		cout << i << "    ";
		tabela[i].Print();
	}
}