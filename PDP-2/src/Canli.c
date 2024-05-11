#include "Canli.h"

Canli* createCanli(int deger){
	Canli* this;
	this = (Canli*)malloc(sizeof(Canli));
	this -> deger = deger;
	return this;
}

void printCanli(Canli* canli) {
    printf("Deger: %d\n", canli->deger);
}
