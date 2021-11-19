#include "middle_str.h"
bool itc_compare(string a, string b){
    long long d, f, g;
    d = itc_len(a);
    f = itc_len(b);
    if (d != f)
        return false;
    for ( long long i = 0; a[i] != '\0'; i++){
        if (a[i] != b[i])
            return false;}
    return true;
}
