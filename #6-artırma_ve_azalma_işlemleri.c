// #6: art�rma ve azalma i�lemleri

#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	a = (b + c + 10);
	a += 2; // k�sa yaz�m� (a'ye 2 ekle)
	a++; // a'y� 1 artt�r (postfix formu), �nce a'y� al sonra art�r.

	b = b - 1;
	b -= 2; // k�sa yaz�m� (b'den 2 ��kar)
	--b; // b'y� 1 azalt�r (prefix formu) �nce eksilt sonra b'yi al.

	printf("%d\n", a);
	printf("%d", b);

	getchar();
	return 0;
}