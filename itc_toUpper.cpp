#include "middle_str.h"
unsigned char itc_toUpper(unsigned char a){
     if (65 <= a and a <= 90)
        return a + 32;
    return a;
}
