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
char itc_sameChar(string a){
  int k = 0;
  for (int i = 0; a[i] = '\0'; i++){
    for (int f = 0; a[f] = '\0'; f++){
      if (a[i] == a[f] and (65 <= a[i] and str[i] <= 90) or (97 <= a[i] and a[i] <= 122)){
        k++;}
      if (k == 2){
        return a[i];}
    }
    k = 0;
  }
}
bool itc_isFirstInSecond(string s1, string s2){
    string h, y;
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
        if (h == b){
            j = i - e;
        }else{
            h = y;}
    }
    if (j == -1){
        return q = 0;
    }else{
        return q = 1;}}
string itc_Cezar(string a, int b){
    long long c = 0, d = 97;
    string e = "";
    if (a == "")
        return "error";
    for (long long i = 0; a[i] != '\0'; i++)
    {
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
string itc_rmFreeSpace(string a){
    long long t = itc_countWords(a);
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
    return b;}
