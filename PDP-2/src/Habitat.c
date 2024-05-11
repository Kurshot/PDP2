#include "Habitat.h"
#include <stdio.h>
#include <unistd.h>

void getMatrixSize()
{
   FILE *dosya = fopen("sayilar.txt", "r"); // Dosyayı okuma modunda aç

    if (dosya == NULL) { // Dosyanın başarıyla açılıp açılmadığını kontrol et
        perror("Dosya acilamadi!");
        return;
    }

    char karakter;
	int sayiAdet = 0;
	int satirAdet = 1;
	while((karakter = fgetc(dosya))!= EOF){
		if(karakter >= '0' && karakter <= '9'){
			sayiAdet++;
			// Bir sonraki karakter 0 ile 9 arasında ise kontrolü yapılacak
			char birSonrakiKarakter = fgetc(dosya);
			if(birSonrakiKarakter >= '0' && birSonrakiKarakter <= '9'){}
			else if(birSonrakiKarakter == '\n')
				satirAdet++;
		}
		else if(karakter == '\n')
			satirAdet++;
	}
	matrisj = sayiAdet/satirAdet;
	matrisi = satirAdet;
	
	printf("Matris boyutlari: %dx%d\n",matrisi,matrisj);
	fclose(dosya);
}

void createArray(){
	void* varlik[matrisi-1][matrisj-1];
	
	FILE *dosya = fopen("sayilar.txt", "r");
	
}