// #16: döngüler 3 (continue)

#include <stdio.h>
int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 5) // böylece çýktýda 2 ve 5 gözükmez.
		{
			i++;
			continue; // döngüyü en baþa alýr.
		}
		printf("i: %d\n", i);
		i++;
	}

	getchar();
	return 0;
}