#include "middle_str.h"
string itc_maxCharWord(string a){
    long long c = -1, d = 0;
    string f = "", e = "";
    if (a == "")
        return "error";
    for (long long i = 0; a[i] != '\0'; i++){
        if ((65 <= a[i] and str[i] <= 90) or (97 <= a[i] and a[i] <= 122)){
            f = f + a[i];
            d ++;
        }else{
            if (c < d){
                e = f;}
            d = 0;
            f = "";}
    }
    if (c < d){
        e = f;}
    return e;
}
