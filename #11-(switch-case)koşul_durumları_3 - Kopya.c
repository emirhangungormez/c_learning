// #11: ko�ul durumlar� 3 (switch-case)

#include <stdio.h>
int main()
{
	// birden �ok ko�ulu swtich ile ayn� anda kontrol etme

	int islem = 2;
	switch (islem)
	{
	case 1:
		printf("islem 1'dir.");
		break; // bu komuttan ��k anlam�na geliyor
	case 2:
		printf("islem 2'dir.");
		break;
	default:
		printf("secilen islem belirsizdir.");
	}

	getchar();
	return 0;
}