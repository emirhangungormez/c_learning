// #15: d�ng�ler 2 (for)

#include <stdio.h>
int main()
{
	// d�ng� say� 5 olana kadar devam eder.
	int i;
	for (i = 0; i < 10; i++) // �nce i'ye atama yap�l�r, ko�ul ve artma s�reci belirlenir.
	{
		printf("i: %d\n", i);
	}

	getchar();
	return 0;
}