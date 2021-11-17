string itc_even_place(string a){
    int c;
    string s;
    c=0;
    while(a[c]!='\0'){
        if (c%2==1 or c==1){
        }else{
            s=s+a[c];
        }
        c=c+1;
    }
    return s;
}
double itc_percent_lower_uppercase(string a){
    string b="qwertyuiopasdfghjklzxcvbnm";
    string c="QWERTYUIOPASDFGHJKLZXCVBNM";
    long long  t, f, y=0, x=0;
    double s;
    t=itc_len(a);
    f=itc_len(b);
    for (int i=0; i!=t; i++){
        for (int w=0; w!=f; w++){
            if (a[i]==b[w]){
                x=x+1;
            }else if(a[i]==c[w]){
                y++;
            }
        }
        
        
    }
    
    s=(y/x)*100;
    return s;
}
string itc_reverse_str(string a){
    long long b;
    string h;
    b=0;
    b=itc_len(a);
    b=b-1;
    while(b!=-1){
        h=h+a[b];
        b=b-1;
    }
    return h;
}
string itc_slice_str(string a, int b, int c){
    int e;
    string h; 
    e=itc_len(a);
    if (b>e){
        h=a;
    }else if (e<c){
        while(b<=e){
            h=h+a[b]; 
            b++;
        }
    }else{
        while(b!=c){
            h=h+a[b];
            b++;
        }
    }
    return h;
}
bool itc_equal_reverse(string a){
    long long b;
    string h;
    bool k;
    b=itc_len(a);
    b=b-1;
    while(b!=-1){
        h=h+a[b];
        b=b-1;
    }
    if (h==a){
        k=1;
        return k;
    }else{
        k=0;
        return k;
    }
}
