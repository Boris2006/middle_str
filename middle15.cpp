#include "middle_str.h"

bool itc_isDigit(unsigned char a){
    bool b;
    if (8 <= a and a <= 57){
        return b = 1;
    }else{
        return b = 0;
    }
    
}
unsigned char itc_toUpper(unsigned char a)
{
    if (97 <= a and a <= 122){
        return a - 32;
    }else if (65 <= a and a <= 90){
        return a + 32;
    }else{
        return a;
    }
}
unsigned char itc_changeCase(unsigned char a){
    return itc_toUpper(a);
}
