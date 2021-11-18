#include "middle_str"
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
