// #27: pointer, deðerle çaðýrým
#include <stdio.h>
#include <string.h>
void swap(int* i, int* j)
{
	int temp = *i; // temp = 5
	*i = *j; // i=6, j=6
	*j = temp; // j = 5
	printf("degerler: %d %d\n", *i, *j);
}
int main()
{
	// call by value
	// call by reference 
	int a = 5;
	int b = 6;
	swap(a, b);
	printf("a: %d, b: %d", a, b);

	getchar();
	return 0;
}