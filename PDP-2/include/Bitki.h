#ifndef BITKI_H
#define BITKI_H

#include "Canli.h"

typedef struct {
    Canli* base; // Kalıtım
}Bitki;

Bitki* createBitki(int deger);
void printBitki(Bitki* bitki);
void deleteBitki(Bitki* bitki);
char* bitkiGorunum();

#endif /* BITKI_H */
