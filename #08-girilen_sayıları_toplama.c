// #8: girilen sayıları toplama

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c); // '&' a,b,c'nin bellekteki tam yeri.
	printf("total: %d", a + b + c);

	getchar();
	getchar(); // programın kapanmasını önlemek için 2 tane kullanıyoruz.
	return 0;
}
