// #8: girilen say�lar� toplama

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c); // '&' a,b,c'nin bellekteki tam yeri.
	printf("total: %d", a + b + c);

	getchar();
	getchar(); // program�n kapanmas�n� �nlemek i�in 2 tane kullan�yoruz.
	return 0;
}