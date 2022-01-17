// #26: pointer ve diziler
#include <stdio.h>
#include <string.h>

int main()
{
	char isim[] = "emirhan";
	char* p = isim;
	printf("%c", *p); // yalnýzca ilk harfe ulaþabilir.
	p++; // diðer harflere ulaþabileceðiz.

	getchar();
	return 0;
}