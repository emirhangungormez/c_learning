// #26: pointer ve diziler
#include <stdio.h>
#include <string.h>

int main()
{
	char isim[] = "emirhan";
	char* p = isim;
	printf("%c", *p); // yaln�zca ilk harfe ula�abilir.
	p++; // di�er harflere ula�abilece�iz.

	getchar();
	return 0;
}