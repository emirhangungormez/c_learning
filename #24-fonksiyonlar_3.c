// #24: fonksiyonlar 3, kelimelerin uzunlu�unu bulan fonksiyon.

#include <stdio.h>
#include <string.h>
int benimstrlen(char a[]) // kendi fonksiyonumuzu yaz�yoruz.
{
	int uzunluk = 0;
	int i = 0;
	for (; a[i] != '\0'; i++) // �\0' kelimenin sonu anlam�na geliyor.
	{
		uzunluk++;
	}
	return uzunluk;
}

int main()
{
	char isim[] = "emirhan";
	printf("kelime uzunlugu: %d", benimstrlen(isim));

	getchar();
	return 0;
}