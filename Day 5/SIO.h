#ifndef _SIO_h
#define _SIO_h

#include <stdio.h>

#pragma region declareFuncs
short GetShort(void);
int GetInt(void);
long GetLong(void);
float GetFloat(void);
double GetDouble(void);
long double GetLongDouble(void);

unsigned int GetUnsignedInt(void);
unsigned long GetUnsignedLong(void);
#pragma endregion declareFuncs

#pragma region funcs
short GetShort(void) {
    short toReturn;

    scanf("%hi", &toReturn);

    return toReturn;
}

int GetInt(void) {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}

long GetLong(void) {
    long toReturn;

    scanf("%li", &toReturn);

    return toReturn;
}

float GetFloat(void) {
    float toReturn;

    scanf("%f", &toReturn);

    return toReturn;
}

double GetDouble(void) {
    double toReturn;

    scanf("%lf", &toReturn);

    return toReturn;
}

long double GetLongDouble(void) {
    long double toReturn;

    scanf("%Lf", &toReturn);

    return toReturn;
}

unsigned int GetUnsignedInt(void) {
    unsigned int toReturn;

    scanf("%u", &toReturn);

    return toReturn;
}

unsigned long GetUnsignedLong(void) {
    unsigned long int toReturn;

    scanf("%lu", &toReturn);

    return toReturn;
}
#pragma endregion funcs

#endif