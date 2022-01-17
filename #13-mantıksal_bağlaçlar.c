// #11: mantýksal baðlaçlar

#include <stdio.h>
int main()
{
	// koþullar doðru ise 1, yanlýþ ise 0 ekrana yazdýracaktýr.
	printf("%d\n", (3 < 4) && (4 == 4)); // '&&', 've' anlamýna geliyor.
	printf("%d\n", (3 < 4) || (4 == 4)); // '||', 'veya' anlamýna geliyor.
	printf("%d", !(3 < 4)); // '!', 'deðil'ini alýyor.

	getchar();
	return 0;
}