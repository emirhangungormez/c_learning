// #22: fonksiyonlar 1

#include <stdio.h>
#include <string.h>
void art�rma(int a) // kendi fonksiyonumuzu yaz�yoruz.
{
	a = a + 1;
	printf("%d", a);
}
int main()
{
	art�rma(10); // yazd���m�z fonksiyonu �a��r�yoruz.

	getchar();
	return 0;
}