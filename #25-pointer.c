// #25: pointer
#include <stdio.h>
#include <string.h>

int main()
{
	// reference
	int i = 5;
	int* p = &i;
	printf("%u\n", p); //haf�zadaki yeri bulma
	// dereference
	printf("%d\n", *p);  // pointer int de�erine eri�erek o de�ere sahip olur.

	(*p)++; // i�lem �ncli�i i�in parantez al�yoruz.
	printf("%d\n", *p);


	getchar();
	return 0;
}