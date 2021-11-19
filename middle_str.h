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
#endif // MIDDLE_H_INCLUDED
