// #7: atanacak de�eri kullan�c�dan isteme

#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a); // '&' a'n�n bellekteki tam yeri.
	printf("%d", a);

	getchar();
	getchar(); // program�n kapanmas�n� �nlemek i�in 2 tane kullan�yoruz.
	return 0;
}