// #2: veri deðiþkenleri, atama yapýmý ve format belirleyicileri

#include <stdio.h>
int main()
{
	int i = 11; // tam sayý atamasý, (%d) ile çýktý veriyoruz.
	short int si = 9; // küçük yer kaplayan tam sayý atamasý, (%d) ile çýktý veriyoruz.
	long int li = 23; // büyük yer kaplayan tam sayý atamasý, (%d) ile çýktý veriyoruz.
	double di = 3.14; // büyük yer kaplayan ondalýk sayý atamasý, (%f) ile çýktý veriyoruz.
	float fi = 1.618; // küçük yer kaplayan ondalýk sayý atamasý, (%f) ile çýktý veriyoruz.
	char ci = 'E'; // karakter atamasý, (%c) ile çýktý veriyoruz.

	// format belirleyicileri
	printf("%d", i); // '%d' ile 'int' leri yazdýrabiliyoruz.
	printf("%f", di); // '%f' ile sayýlarý ondalýk þeklide yazdýrabiliyoruz.
	printf("%.2f", di); // '.2' ile noktadan sonra yazdýrýlabilecek sayý miktarýný seçebiliyoruz.
	printf("%c", ci); // '%c' ile karakterleri yazdýrabiliyoruz.
	printf("%d %d %d %f %f %c", i, si, li, di, fi, ci);

	getchar();
	return 0;
}