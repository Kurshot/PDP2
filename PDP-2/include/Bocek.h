#ifndef BOCEK_H
#define BOCEK_H

#include "Canli.h"

typedef struct {
    Canli* base; // Kalıtım
} Bocek;

Bocek* createBocek(int deger);
void printBocek(Bocek* bocek);
void deleteBocek(Bocek* bocek);
char* bocekGorunum();

#endif /* BOCEK_H */
