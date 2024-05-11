#include "Bocek.h"

Bocek* createBocek(int deger) {
    Bocek* bocek = (Bocek*)malloc(sizeof(Bocek));
    if (bocek == NULL) {
        return NULL;
    }
	bocek->base = createCanli(deger);
    bocek->base->deger = deger;
	bocek->base->gorunum = bocekGorunum;
    return bocek;
}

void printBocek(Bocek* bocek) {
    printf("Deger: %d\n", bocek->base->deger);
}

char* bocekGorunum(){
	return "C";
}

void deleteBocek(Bocek* bocek){
	if(bocek != NULL){
		if(bocek->base != NULL){
			free(bocek->base);
			bocek->base = NULL;
		}
		free(bocek);
	}
}
