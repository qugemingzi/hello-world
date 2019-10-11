#include "math.h"

int pow2(int num){
    return num*num;
}

int pow(int num, int p){
    int r = 1;
    for(int i = 0; i < p; i++)
        r *= num;
    return r;
}
