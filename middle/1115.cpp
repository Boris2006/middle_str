
string itc_cmp_str(string a, string b, int c){
    long long f, m=0, g;
    stringh;
    f=itc_len(a);
    if (f-1>c){
        while(m!=c){
            h=h+a[m];
            m++;
        }
        g=itc_len(b);
        if ((f-c)>g){
            h=h+b;
            m=m+g;
            for (int i=m; i!=f; i++){
                h=h+a[m];
                m++;
            }
            return h;
        }else if ((f-c)==g){
            h=h+b;
            return h;
        }else if((f-c)<g){
            while(g!=(f-c)){
                g--;
            }
            c=0;
            while(c!=g){
                h=h+b[c];
                c++;
            }
            return h;
        }
            
    }else{
        return a;
    }

}
int itc_find_str(string a, string b){
    string h, y;
    int c, e, j=-1, g;
    c=itc_len(a);
    e=itc_len(b);
    for (int i=c; i!=e-1; i--){
        g=i;
        while(g!=i-e){
            g--;
        }
        while(g<i){
            h=h+a[g];
            g++;
        }
        if (h==b){
            j=i-e;
        }else{
            h=y;
        }
    }
    return j;
}
string itc_three_str(string a, string b, string c){
    long long d, e, f, p;
    string l;
    f=-1;
    d=e=0;
    while(b[d]!='\0'){
        d=d+1;
    }
    while(a[e+d]!='\0){
        for(int i=0; i<d; i++){
            p=p+1;
            l=l+a[i];
        }
        if (l==b){
            
            
            
    

    
    
    
