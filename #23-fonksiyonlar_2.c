// #23: fonksiyonlar 2, dizi elemanlarýný toplayan fonksiyon

#include <stdio.h>
#include <string.h>
int test(int a[], int uzunluk) // kendi fonksiyonumuzu yazýyoruz.
{
	int toplam = 0;
	int i;
	for (i = 0; i < uzunluk; i++)
	{
		toplam += a[i];
	}
	return toplam;
}
int main()
{
	int dizi[] = { 10, 20, 30, 40, 50 };
	printf("%d", test(dizi, 5));

	getchar();
	return 0;
}