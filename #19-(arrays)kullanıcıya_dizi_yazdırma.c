// #19: arrays 3 (diziler), kullan�c�ya dizi yazd�rma

#include <stdio.h>
int main()
{
	int dizi[4]; // dizinin s�n�r�n� belirledik.
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("yeni dizi elemaninin degeri:");
		scanf_s("%d", &dizi[i]);
	}
	for (i = 0; i < 4; i++)
	{
		printf("eleman: %d\n", dizi[i]);
	}

	getchar();
	return 0;
}