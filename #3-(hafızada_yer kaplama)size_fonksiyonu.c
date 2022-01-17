// #3: hafýzada yer kaplama, size fonksiyonu

/* int : 4 byte
short int : 2 byte
long int : 8 byte
double : 8 byte
float : 4 byte
char : 1 byte */

#include <stdio.h>
int main()
{
	printf("%d byte", sizeof(int));
	printf("%d byte", sizeof(short int));
	printf("%d byte", sizeof(double));
	printf("%d byte", sizeof(char));
	printf("%d byte", sizeof(float));

	getchar();
	return 0;
}