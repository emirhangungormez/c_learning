// #11: koþul durumlarý 3 (switch-case)

#include <stdio.h>
int main()
{
	// birden çok koþulu swtich ile ayný anda kontrol etme

	int islem = 2;
	switch (islem)
	{
	case 1:
		printf("islem 1'dir.");
		break; // bu komuttan çýk anlamýna geliyor
	case 2:
		printf("islem 2'dir.");
		break;
	default:
		printf("secilen islem belirsizdir.");
	}

	getchar();
	return 0;
}