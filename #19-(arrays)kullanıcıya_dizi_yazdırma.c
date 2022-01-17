// #19: arrays 3 (diziler), kullanýcýya dizi yazdýrma

#include <stdio.h>
int main()
{
	int dizi[4]; // dizinin sýnýrýný belirledik.
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