#include "Bitki.h"

Bitki* createBitki(int deger) {
    Bitki* bitki = (Bitki*)malloc(sizeof(Bitki));
    if (bitki == NULL) {
        return NULL;
    }
	bitki->base = createCanli(deger);
	bitki->base->deger = deger;
	bitki->base->gorunum = bitkiGorunum;
    return bitki;
}

void printBitki(Bitki* bitki) {
    printf("Deger: %d\n", bitki->base->deger);
}

char* bitkiGorunum(){
	return "B";
}

void deleteBitki(Bitki* bitki){
	if(bitki != NULL){
		if(bitki->base != NULL){
			free(bitki->base);
			bitki->base = NULL; // neden yapıyoruz anlamadım.
		}
		free(bitki);
	}
}
