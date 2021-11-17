#include "middle_str.h"

bool itc_isDigit(unsigned char a){
    bool b;
    if (8 <= a and a <= 57){
        b=1;
        return b;
    }else{
        b=0;
        return b;
    }
    
}
unsigned char itc_toUpper(unsigned char a)
{
    if (97 <= a and a <= 122){
        return a - 32;
    }else{
        return a;
    }
}
