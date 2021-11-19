#include "middle_str.h"
unsigned char itc_toUpper(unsigned char a){
     if (97 <= a and a <= 122)
        return a - 32;
    return a;
}
