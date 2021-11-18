#include "middle_str.h"
string itc_Cezar(string a, int b){
    int c = 0, d = 97;
    string e = "";
    if (a == ""){
        return "error";}
    for (int i = 0; a[i] != '\0'; i++){
        if ((65 <= a[i] and a[i] <= 90) or (97 <= a[i] and a[i] <= 122)){
            d = 97;
            if (65 <= a[i] and a[i] <= 90){
                d = 65;}
            if (a[i] - d + b >= 0){
                e += d + (a[i] - d + b) % 25;
            }else{
                e += d + 25 - (25 + d - a[i]) % 25;}
            c ++;
        }else{
            e = e + a[i];
            c = 0;}}
    return e;}
