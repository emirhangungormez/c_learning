// #16: d�ng�ler 3 (continue)

#include <stdio.h>
int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 5) // b�ylece ��kt�da 2 ve 5 g�z�kmez.
		{
			i++;
			continue; // d�ng�y� en ba�a al�r.
		}
		printf("i: %d\n", i);
		i++;
	}

	getchar();
	return 0;
}