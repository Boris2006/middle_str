#include "middle.h"
int itc_min_num(long long a){
    int b, c;
    c=9;
    if (a<0){
        a=a*(-1);
    }
    if (a==0){
        c=0;
    }
    while (a!=0){
        b=a%10;
        a=a/10;
        if (b<=c){
            c=b;
        }

    }
    return c;
}
int itc_rev_num(long long a){
    long long r;
    int i;
    i=0;
    if (a==0){
        i=1;
    }
    if (a<0){
        a=a*(-1);
    }
    r=a;
    while (a!=0){
        if (a%10==0){
            a=a/10;
            r=a;
        }else{
            a=0;
        }
    }
    while (r!=0){
            i=i+1;
            r=r/10;
    }
    return i;
}
int itc_null_count(long long a){
    int b;
    b=0;
    if (a==0){
        b=1;
    }
    if (a<0){
        a=a*(-1);
    }
    while (a!=0){
        if (a%10==0){
            b=b+1;
        }
        a=a/10;
    }
    return b;
}
bool itc_mirror_num(long long a){
    long long n, b;
    n=0;
    b=a;
    if (a==0){
	return true;
    }
    if ((a % 10) > 0){
    while(a > 0){
        n=10*n + a%10;
        a=a/10;
    }
    return n == b;
    }
 return false;
}
int itc_mirror_count(long long a){
    int i, c;
    long long i;
    c=0;
    i=1;
    while (a<=i){
        if(itc_mirror_num(i)){
            c=c+1;;
        }
        i=i+1;
}
return c;
}
