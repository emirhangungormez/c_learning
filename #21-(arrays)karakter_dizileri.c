// #21: arrays 5 (diziler), karakter(stringer) dizileri

#include <stdio.h>
#include <string.h> //stringler için fonksiyon kütüphanesi
int main()
{
	char name[] = "emir"; //
	// printf("%c %c %c", name[0], name[1], name[2]); // teker teker yazdýrmak için.
	printf("%s\n", name); // dizinin hepsini yazýyor.
	printf("%d", strlen(name)); // 'strlen' stringer'in karakter saysýný söyleyen fonksiyondur.

	getchar();
	return 0;
}