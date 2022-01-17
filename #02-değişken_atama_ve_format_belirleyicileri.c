// #2: veri değişkenleri, atama yapımı ve format belirleyicileri

#include <stdio.h>
int main()
{
	int i = 11; // tam sayı ataması, (%d) ile çıktı veriyoruz.
	short int si = 9; // küçük yer kaplayan tam sayı ataması, (%d) ile çıktı veriyoruz.
	long int li = 23; // büyük yer kaplayan tam sayı ataması, (%d) ile çıktı veriyoruz.
	double di = 3.14; // büyük yer kaplayan ondalık sayı ataması, (%f) ile çıktı veriyoruz.
	float fi = 1.618; // küçük yer kaplayan ondalık sayı ataması, (%f) ile çıktı veriyoruz.
	char ci = 'E'; // karakter ataması, (%c) ile çıktı veriyoruz.

	// format belirleyicileri
	printf("%d", i); // '%d' ile 'int' leri yazdırabiliyoruz.
	printf("%f", di); // '%f' ile sayıları ondalık şeklide yazdırabiliyoruz.
	printf("%.2f", di); // '.2' ile noktadan sonra yazdırılabilecek sayı miktarını seçebiliyoruz.
	printf("%c", ci); // '%c' ile karakterleri yazdırabiliyoruz.
	printf("%d %d %d %f %f %c", i, si, li, di, fi, ci);

	getchar();
	return 0;
}
