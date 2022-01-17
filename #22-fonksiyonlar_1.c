// #22: fonksiyonlar 1

#include <stdio.h>
#include <string.h>
void artýrma(int a) // kendi fonksiyonumuzu yazýyoruz.
{
	a = a + 1;
	printf("%d", a);
}
int main()
{
	artýrma(10); // yazdýðýmýz fonksiyonu çaðýrýyoruz.

	getchar();
	return 0;
}