#include "middle_str.h"
string itc_Cezar(string a, int b){
    string c = "";
    if (a == "")
        return "error";
    for (int i = 0; str[i] != '\0'; i++){
        if (65 <= a[i] and a[i] <= 90)
                        b = (b % 26) + 26;
			c = c + (a[i] - 65 + (b % 26) % 26 + 65;
		
        else if (a[i] >= 97 and a[i] <= 122)
			c = c + (a[i] - 97 + ((b % 26 + 26) % 26)) % 26 + 97;
		else
            c = c + a[i];
	}
	return c;}