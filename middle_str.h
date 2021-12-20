#include <iostream>
#include <string>
using namespace std;
#ifndef MIDDLE_H_INCLUDED
#define MIDDLE_H_INCLUDED
bool itc_isDigit(unsigned char a);
unsigned char itc_toUpper(unsigned char a);
unsigned char itc_changeCase(unsigned char a);
bool itc_compare(string a, string b);
long long itc_len(string a);
int itc_countWords(string a);
string itc_maxCharWord(string a);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string a, string b);
string itc_Cezar(string a, int b);
string itc_rmFreeSpace(string a);
bool itc_isIp(string a);
string itc_DecToBin(string a);
string itc_decToBase(int a, int b);
#endif // MIDDLE_H_INCLUDED
