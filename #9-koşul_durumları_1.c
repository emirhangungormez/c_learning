// #9: ko�ul durumlar� 1

#include <stdio.h>
int main()
{
	printf("%d\n", 3 < 4);
	printf("%d\n", 3 > 4);
	printf("%d\n", 3 == 4); // e�it ise
	printf("%d\n", 3 != 4); // e�it de�il ise
	printf("%d\n", 3 <= 4); // k���k e�it ise

	// ko�ul do�ru ise 1, yanl�� ise 0 de�erini alaca��z.

	getchar();
	return 0;
}