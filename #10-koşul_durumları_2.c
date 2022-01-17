// #10: koþul durumlarý 2

#include <stdio.h>
int main()
{
	int yas = 20;
	if (yas < 18) // koþul doðru ise içeriye girecek, yanlýþ ise bu kýsmý atlayacak.
	{
		printf("yasiniz 18'den kucuktur.");
	}
	else // 'else'in çalýþma durumu 'if'in çalýþmama durumuna baðlýdýr.
	{
		printf("yasiniz 18'den buyuktur.\n");
	}

	// birden çok koþulu ayný anda kontrol etme

	int islem = 5;
	if (islem == 1)
	{
		printf("islem 1'dir.");
	}
	else if (islem == 2)
	{
		printf("islem 2'dir.");
	}
	else if (islem == 3)
	{
		printf("islem 3'tür.");
	}
	else
	{
		printf("secilen islem belirsizdir.");
	}

	getchar();
	return 0;
}