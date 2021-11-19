#include "middle_str.h"
bool itc_isFirstInSecond(string a, string b){
    string h = "", y = "";
    bool q;
    int c, e, j = -1, g;
    c = itc_len(a);
    e = itc_len(b);
    for (int i = c; i != e-1; i--){
        g = i;
        while(g != i - e){
            g--;}
        while(g < i){
            h = h + a[g];
            g++;}
        if (h == b)
            j = i - e;
        else
            h = y;}
    }
    if (j == -1)
        return q = 0;
    return q = 1;}
