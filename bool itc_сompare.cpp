#include "middle_str"
bool itc_сompare(string a, string b){
    bool c;
    long long d = itc_len(a), f = itc_len(b), g;
    if (d != f){
        return false;}
    for ( long long i=0; i != d; i++){
        if (a-1[i] != b-1[i]){
            return false;}}
    return true;
}
