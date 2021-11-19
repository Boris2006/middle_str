#include "middle_str.h"
char itc_sameChar(string a){
  long long b = 0, c = 0;
    string d = "";
    string ans = "";
    for (long long i = 0; a[i] != '\0'; i++)
    {
        if (65 <= a[i] and a[i] <= 90 or 97 <= a[i] and a[i] <= 122)
            c = 0;
            d += a[i];
            b ++;
            for (long long _ = 0; a[_] != '\0'; _++){
                if (a[_] == a[i])
                    c++;
            }
            if (c == 2)
                return a[i];
        else
            b = 0;
    }
    return ‘b’;
}
