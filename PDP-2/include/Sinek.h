#ifndef SINEK_H
#define SINEK_H

#include "Bocek.h"

typedef struct {
    Bocek* base; // Kalıtım
} Sinek;

Sinek* createSinek(int deger);
void printSinek(Sinek* sinek);
void deleteSinek(Sinek* sinek);
char* sinekGorunum();

#endif /* SINEK_H */
