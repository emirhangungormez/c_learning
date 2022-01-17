// #15: döngüler 2 (for)

#include <stdio.h>
int main()
{
	// döngü sayý 5 olana kadar devam eder.
	int i;
	for (i = 0; i < 10; i++) // önce i'ye atama yapýlýr, koþul ve artma süreci belirlenir.
	{
		printf("i: %d\n", i);
	}

	getchar();
	return 0;
}