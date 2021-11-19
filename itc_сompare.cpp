#include "middle_str.h"
bool itc_compare(string a, string b){
    long long c, d;
    c = itc_len(a);
    d = itc_len(b);
    if (b == ""){
        return false;}
    if (c != d){
        return false;}
    for(int i = 0; i < c; i++){
        if (a[i] != b[i]){
            return false;}
    }
    return true;
}
