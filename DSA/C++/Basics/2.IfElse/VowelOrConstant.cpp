//Program to check if an alphabet is a vowel or a consonant.

#include <iostream>
using namespace std;
int main(){
 char ch;
 cout << "Enter an alphabet: ";
 cin >> ch;
 int isVowelLowercase, isVowelUppercase;
 isVowelUppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
 isVowelLowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
 if (isVowelLowercase || isVowelUppercase) cout << ch << " is a vowel.";
 else cout << ch << " is a consonant.";
 return 0;
}
