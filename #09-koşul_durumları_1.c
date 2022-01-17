// #9: koşul durumları 1

#include <stdio.h>
int main()
{
	printf("%d\n", 3 < 4);
	printf("%d\n", 3 > 4);
	printf("%d\n", 3 == 4); // eşit ise
	printf("%d\n", 3 != 4); // eşit değil ise
	printf("%d\n", 3 <= 4); // küçük eşit ise

	// koşul doğru ise 1, yanlış ise 0 değerini alacağız.

	getchar();
	return 0;
}
