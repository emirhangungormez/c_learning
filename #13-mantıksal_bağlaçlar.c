// #11: mant�ksal ba�la�lar

#include <stdio.h>
int main()
{
	// ko�ullar do�ru ise 1, yanl�� ise 0 ekrana yazd�racakt�r.
	printf("%d\n", (3 < 4) && (4 == 4)); // '&&', 've' anlam�na geliyor.
	printf("%d\n", (3 < 4) || (4 == 4)); // '||', 'veya' anlam�na geliyor.
	printf("%d", !(3 < 4)); // '!', 'de�il'ini al�yor.

	getchar();
	return 0;
}