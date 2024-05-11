#include "Sinek.h"


Sinek* createSinek(int deger) {
    Sinek* sinek = (Sinek*)malloc(sizeof(Sinek));
    if (sinek == NULL) {
        return NULL;
    }
	sinek->base = createBocek(deger);
    sinek->base->base->deger = deger;
	sinek->base->base->gorunum = sinekGorunum;
    return sinek;
}

void printSinek(Sinek* sinek) {
    printf("Deger: %d\n",sinek->base->base->deger);
}

char* sinekGorunum(){
	return "S";
}

void deleteSinek(Sinek* sinek) {
    if (sinek != NULL) {
        // İlgili Bocek nesnesini serbest bırakma
        if (sinek->base != NULL) {
            // İlgili Canli nesnesini serbest bırakma
            if (sinek->base->base != NULL) {
                free(sinek->base->base);
                sinek->base->base = NULL;
            }
            free(sinek->base);
            sinek->base = NULL;
        }
        // Sinek nesnesini serbest bırakma
        free(sinek);
    }
}
