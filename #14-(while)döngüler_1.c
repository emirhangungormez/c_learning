// #14: döngüler 1 (while)

#include <stdio.h>
int main()
{
	// döngü sayý 5 olana kadar devam eder.
	int i = 0;
	while (i < 5)
	{
		printf("i: %d\n", i);
		i++;
	}

	getchar();
	return 0;
}