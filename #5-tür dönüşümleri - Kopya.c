// #5: t�r d�n���mleri

// char -> short -> int -> float -> double
#include <stdio.h>
int main()
{
	printf("%f\n", 10 + 4.2); // sonu� 14.2 ��karak int de�eri float'a d�n��ecektir.
	printf("%d", (int)4.2); // say� int'e �evrilerek ondal�k k�s�mdan kurtulur.

	getchar();
	return 0;
}
