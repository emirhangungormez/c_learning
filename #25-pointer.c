// #25: pointer
#include <stdio.h>
#include <string.h>

int main()
{
	// reference
	int i = 5;
	int* p = &i;
	printf("%u\n", p); //hafýzadaki yeri bulma
	// dereference
	printf("%d\n", *p);  // pointer int deðerine eriþerek o deðere sahip olur.

	(*p)++; // iþlem öncliði için parantez alýyoruz.
	printf("%d\n", *p);


	getchar();
	return 0;
}