#include "Pire.h"

Pire* createPire(int deger) {
    Pire* pire = (Pire*)malloc(sizeof(Pire));
    if (pire == NULL) {
        return NULL;
    }
	pire->base = createBocek(deger);
    pire->base->base->deger = deger;
	pire->base->base->gorunum = pireGorunum;
    return pire;
}

void printPire(Pire* pire) {
    printf("Deger: %d\n", pire->base->base->deger);
}

char* pireGorunum(){
	return "P";
}
void deletePire(Pire* pire){
	if (pire != NULL) {
        // İlgili Bocek nesnesini serbest bırakma
        if (pire->base != NULL) {
            // İlgili Canli nesnesini serbest bırakma
            if (pire->base->base != NULL) {
                free(pire->base->base);
                pire->base->base = NULL;
            }
            free(pire->base);
            pire->base = NULL;
        }
        // Sinek nesnesini serbest bırakma
        free(pire);
	}
}