#include "middle_str.h"
bool itc_compare(string a, string b){
    long long d = itc_len(a), f = itc_len(b), g;
    if (d != f)
        return false;
    for ( long long i = 0; i != '\0'; i++){
        if (a[i] != b[i])
            return false;}
    return true;
}
