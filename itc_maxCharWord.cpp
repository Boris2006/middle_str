#include "middle_str.h"
string itc_maxCharWord(string a){
    if (itc_countWords(a) < 2 || a == "")
        return "error";
    bool b = false;
    long long c = -1,d = 0;
    string e = "";
    string r = "";
    for (long long i = 0; a[i] != '\0'; i++){
        if ((65 <= a[i] and a[i] <= 90) or (97 <= a[i] and a[i] <= 122))
            e += a[i];
            d ++;
        else
            if (a[i] == ' ')
                b = true;
            if (c < d)
                c = d;
                r = e;
            d = 0;
            e = "";
    }
    if (c < d)
        r = e;
    if (!b)
        return "error";
    return r;}
