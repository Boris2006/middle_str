#ifndef MIDDLE_H_INCLUDED
#define MIDDLE_H_INCLUDED
using namespace std;
#include <string>
#include <iostream>
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string a, string b);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
long long itc_len(string a);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int num, int base);
#endif // MIDDLE_H_INCLUDED
