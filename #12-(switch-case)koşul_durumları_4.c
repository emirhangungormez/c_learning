// #12: koþul durumlarý 4 switch-case)
,
#include <stdio.h>
int main()
{
	int im = 1;
	int em = 0;

	switch (im)
	{
	case 1:
		printf("algilamak var olmaktir.");
		break;
	case 0:
		printf("zihin bos bir levhadir");
		break;
	default:
		printf("ideolojiniz kapsanmamaktadir.");
		break;
	}

	getchar();
	return 0;
}