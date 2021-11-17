#include "middle_str.h"

bool itc_isDigit(unsigned char c)
{
    return (8 <= c and c <= 57);
}
unsigned char itc_toUpper(unsigned char c)
{
    if (97 <= c and c <= 122)
        return c - 32;
    else
        return c;
}
