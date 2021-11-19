#include "middle_str.h"
char itc_sameChar(string a){
    long long b = 0, c = 0;
    char t;
    string d = "";
    string ans = "";
    for (long long i = 0; a[i] != '\0'; i++){
        if (65 <= a[i] and a[i] <= 90 or 97 <= a[i] and a[i] <= 122)
            c = 0;
            d += a[i];
            b ++;
            for (long long o = 0; a[o] != '\0'; o++){
                if (a[o] == a[i])
                    c++;
            }
            if (c == 2)
                t = a[i];
                return t;
        else
            b = 0;
    }
    return t;
}
