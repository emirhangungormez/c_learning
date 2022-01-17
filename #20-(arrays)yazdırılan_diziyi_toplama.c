// #20: arrays 4 (diziler), kullanýcýya dizi yazdýrma ve toplama

#include <stdio.h>
int main()
{
	int dizi[5];
	int toplam = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("yeni dizi elemaninin degeri:");
		scanf_s("%d", &dizi[i]);
	}

	for (i = 0; i < 5; i++)
	{
		toplam += dizi[i];
	}
	printf("total: %d", toplam);

	getchar();
	return 0;
}