// #7: atanacak deðeri kullanýcýdan isteme

#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a); // '&' a'nýn bellekteki tam yeri.
	printf("%d", a);

	getchar();
	getchar(); // programýn kapanmasýný önlemek için 2 tane kullanýyoruz.
	return 0;
}