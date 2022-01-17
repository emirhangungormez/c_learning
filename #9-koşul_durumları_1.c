// #9: koþul durumlarý 1

#include <stdio.h>
int main()
{
	printf("%d\n", 3 < 4);
	printf("%d\n", 3 > 4);
	printf("%d\n", 3 == 4); // eþit ise
	printf("%d\n", 3 != 4); // eþit deðil ise
	printf("%d\n", 3 <= 4); // küçük eþit ise

	// koþul doðru ise 1, yanlýþ ise 0 deðerini alacaðýz.

	getchar();
	return 0;
}