// #6: artýrma ve azalma iþlemleri

#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	a = (b + c + 10);
	a += 2; // kýsa yazýmý (a'ye 2 ekle)
	a++; // a'yý 1 arttýr (postfix formu), önce a'yý al sonra artýr.

	b = b - 1;
	b -= 2; // kýsa yazýmý (b'den 2 çýkar)
	--b; // b'yý 1 azaltýr (prefix formu) önce eksilt sonra b'yi al.

	printf("%d\n", a);
	printf("%d", b);

	getchar();
	return 0;
}
