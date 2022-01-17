// #7: atanacak değeri kullanıcıdan isteme

#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a); // '&' a'nın bellekteki tam yeri.
	printf("%d", a);

	getchar();
	getchar(); // programın kapanmasını önlemek için 2 tane kullanıyoruz.
	return 0;
}
