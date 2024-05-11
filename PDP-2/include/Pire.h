#ifndef PIRE_H
#define PIRE_H

#include "Bocek.h"

typedef struct {
    Bocek* base; // Kalıtım
} Pire;

Pire* createPire(int deger);
void printPire(Pire* pire);
void deletePire(Pire* pire);
char* pireGorunum();

#endif /* PIRE_H */
