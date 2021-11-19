#include <iostream>
#include <string>
using namespace std;
#ifndef MIDDLE_H_INCLUDED
#define MIDDLE_H_INCLUDED
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char a);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
long long itc_len(string a);
int itc_countWords(string a);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string a, int b);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int num, int base);
#endif // MIDDLE_H_INCLUDED
