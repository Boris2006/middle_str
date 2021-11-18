#include "middle_str.h"
int itc_countWords(string a){
    int b = 0, c = 0;
    string f = "";
    for (int i = 0; str[i] != '\0'; i++){
        if ((65 <= a[i] and a[i] <= 90) or (97 <= a[i] and a[i] <= 122)){
            f = f + str[i];
            c++;
        }else{
            if (c != 0){
                b++;}
            c = 0;
            f = "";}}
    if (c != 0){
        b++;}
    return b;}
