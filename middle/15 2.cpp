#include "str_easy.h"
string itc_hello_str(string a){
    cout << "Hello, " << a;
}
long long itc_len(string a){
    long long b;
    b=0;
    while (a[b]!='\0'){
        b=b+1;
    }
    return b;

}
void itc_print_copy_str(string a, int b){
    while (b!=0){
        cout << a;
        b=b-1;
    }
}
void itc_first_end_three(string a){
    string h;
    long long j, c, b, n;
    c=0;
    n=0;
    b=itc_len(a);
    if (b>5){
            while (c!=3){
                h=h+a[c];
                c++;
            }
            b=b-1;
            while (n!=3){
                h=h+a[b];
                b=b-1;
                n++;
            }
            cout << h;
    }else{
        while (b!=0){
            cout << a[c];
            b--;
        }
    }


}
int itc_count_char_in_str(char a, string b ){
    long long  c, h;
    c=0;
    h=0;
    while (b[c]!='\0'){
        if (b[c]==a){
            h=h+1;
        }
        c=c+1;
    }
    return h;
}
