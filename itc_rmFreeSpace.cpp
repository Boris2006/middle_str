#include "middle_str.h"
string itc_rmFreeSpace(string a){
    long long t = itc_len(a);
    long long b = 0, c = 0;
    string f = "", p;
    for (long long i = 0; str[i] != '\0'; i++){
        if ((65 <= a[i] and a[i] <= 90) or (97 <= a[i] and a[i] <= 122)){
            f = f + str[i];
            c++;
        }else{
            if (c != 0)}
                b++;}
            if (b != t){
                p = p + f + " ";
            }else{
                p = p + f;}
            c = 0;
            f = "";}}
    if (c != 0){
        b++;
        p = p + f;}
    return p;}
