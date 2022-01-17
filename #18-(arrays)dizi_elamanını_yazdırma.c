// #18: arrays 2 (diziler), eleman yazdýrma

#include <stdio.h>
int main()
{
	int dizi[] = { 10,20,30,40 };
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("eleman: %d\n", dizi[i]);
	}

	getchar();
	return 0;
}