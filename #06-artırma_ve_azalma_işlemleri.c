// #6: artırma ve azalma işlemleri

#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	a = (b + c + 10);
	a += 2; // kısa yazımı (a'ye 2 ekle)
	a++; // a'yı 1 artır (postfix formu), önce a'yi al sonra artır.

	b = b - 1;
	b -= 2; // kısa yazımk (b'den 2 çıkar)
	--b; // b'yi 1 azaltır (prefix formu) önce eksilt sonra b'yi al.

	printf("%d\n", a);
	printf("%d", b);

	getchar();
	return 0;
}
