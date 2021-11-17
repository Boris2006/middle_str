#include "middle.h"
void itc_num_print(long long a){
    cout << a;
}
int itc_len_num(long long a){
    int b;
    b=0;
    if (a<0){
        a=a*(-1);
    }
    if (a==0){
        b=1;
    }
    while (a!=0){
        a=a/10;
        b=b+1;
    }
    return b;
}
int itc_sum_num(long long a){
    int b;
    b=0;
    if (a<0){
        a=a*(-1);
    }
    while (a!=0){
        b=b+a%10;
        a=a/10;
    }
    return b;
}
long long itc_multi_num(long long a){
    int b;
    b=1;
    if (a<0){
        a=a*(-1);
    }
    while (a!=0){
        b=b*(a%10);
        a=a/10;
    }
    return b;
}
int itc_max_num(long long a){
    int b, c;
    c=0;
    if (a<0){
        a=a*(-1);
    }
    while (a!=0){
        b=a%10;
        a=a/10;
        if (b>=c){
            c=b;
        }

    }
    return c;
}
