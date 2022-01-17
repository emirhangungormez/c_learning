// #2: veri de�i�kenleri, atama yap�m� ve format belirleyicileri

#include <stdio.h>
int main()
{
	int i = 11; // tam say� atamas�, (%d) ile ��kt� veriyoruz.
	short int si = 9; // k���k yer kaplayan tam say� atamas�, (%d) ile ��kt� veriyoruz.
	long int li = 23; // b�y�k yer kaplayan tam say� atamas�, (%d) ile ��kt� veriyoruz.
	double di = 3.14; // b�y�k yer kaplayan ondal�k say� atamas�, (%f) ile ��kt� veriyoruz.
	float fi = 1.618; // k���k yer kaplayan ondal�k say� atamas�, (%f) ile ��kt� veriyoruz.
	char ci = 'E'; // karakter atamas�, (%c) ile ��kt� veriyoruz.

	// format belirleyicileri
	printf("%d", i); // '%d' ile 'int' leri yazd�rabiliyoruz.
	printf("%f", di); // '%f' ile say�lar� ondal�k �eklide yazd�rabiliyoruz.
	printf("%.2f", di); // '.2' ile noktadan sonra yazd�r�labilecek say� miktar�n� se�ebiliyoruz.
	printf("%c", ci); // '%c' ile karakterleri yazd�rabiliyoruz.
	printf("%d %d %d %f %f %c", i, si, li, di, fi, ci);

	getchar();
	return 0;
}