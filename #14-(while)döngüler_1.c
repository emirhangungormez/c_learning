// #14: d�ng�ler 1 (while)

#include <stdio.h>
int main()
{
	// d�ng� say� 5 olana kadar devam eder.
	int i = 0;
	while (i < 5)
	{
		printf("i: %d\n", i);
		i++;
	}

	getchar();
	return 0;
}