#include "middle_str.h"
int itc_countWords(string a){
    int c = 0, d = 0, e = 0;
    if (a == "")
        return 0;
    for (long long i = 0; a[i] != '\0'; i++){
        if ((65 <= a[i] and a[i] <= 90) or (97 <= a[i] and a[i] <= 122))
            c ++;
        else
           if (a[i] == ' ')
                e = 1;
            if (c > 0)
                d++;
            c = 0;}
    if (c > 0)
        d++;
    if (e != 1)
        return 0;
    return d;
