// #10: ko�ul durumlar� 2

#include <stdio.h>
int main()
{
	int yas = 20;
	if (yas < 18) // ko�ul do�ru ise i�eriye girecek, yanl�� ise bu k�sm� atlayacak.
	{
		printf("yasiniz 18'den kucuktur.");
	}
	else // 'else'in �al��ma durumu 'if'in �al��mama durumuna ba�l�d�r.
	{
		printf("yasiniz 18'den buyuktur.\n");
	}

	// birden �ok ko�ulu ayn� anda kontrol etme

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
		printf("islem 3't�r.");
	}
	else
	{
		printf("secilen islem belirsizdir.");
	}

	getchar();
	return 0;
}