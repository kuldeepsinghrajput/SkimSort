
#ifndef __Functions__
#define __Functions__
#include "Macros.cpp"
#include "Global.cpp"

int* vat( register struct group** val)
{ //proof verification has been done

    int j = 0;

    while (range(val) && range(*val))val = (*val)->start; 
    return range(val)?(int*)*val:(int*)val;


}

#endif