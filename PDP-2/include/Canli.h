#ifndef CANLI_H
#define CANLI_H


#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#include "string.h"

typedef struct {
    int deger;
	char* (*gorunum)();
} Canli;

void printCanli(Canli* canli);
Canli* createCanli(int deger);



#endif