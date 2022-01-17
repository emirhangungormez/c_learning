// #5: tür dönüşümleri

// char -> short -> int -> float -> double
#include <stdio.h>
int main()
{
	printf("%f\n", 10 + 4.2); // sonuç 14.2 çıkarak int değeri float'a dönüşecektir.
	printf("%d", (int)4.2); // sayı int'e çevrilerek ondalık kısımdan kurtulur.

	getchar();
	return 0;
}
