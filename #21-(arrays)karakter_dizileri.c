// #21: arrays 5 (diziler), karakter(stringer) dizileri

#include <stdio.h>
#include <string.h> //stringler i�in fonksiyon k�t�phanesi
int main()
{
	char name[] = "emir"; //
	// printf("%c %c %c", name[0], name[1], name[2]); // teker teker yazd�rmak i�in.
	printf("%s\n", name); // dizinin hepsini yaz�yor.
	printf("%d", strlen(name)); // 'strlen' stringer'in karakter says�n� s�yleyen fonksiyondur.

	getchar();
	return 0;
}