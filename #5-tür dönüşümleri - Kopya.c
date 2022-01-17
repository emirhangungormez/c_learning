// #5: tür dönüþümleri

// char -> short -> int -> float -> double
#include <stdio.h>
int main()
{
	printf("%f\n", 10 + 4.2); // sonuç 14.2 çýkarak int deðeri float'a dönüþecektir.
	printf("%d", (int)4.2); // sayý int'e çevrilerek ondalýk kýsýmdan kurtulur.

	getchar();
	return 0;
}
