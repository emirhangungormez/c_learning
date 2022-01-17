// #8: girilen sayýlarý toplama

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c); // '&' a,b,c'nin bellekteki tam yeri.
	printf("total: %d", a + b + c);

	getchar();
	getchar(); // programýn kapanmasýný önlemek için 2 tane kullanýyoruz.
	return 0;
}