//Write a program to find the factorial of a given number.

#include <bits/stdc++.h>
using namespace std;

void factorial(int n){
    int fact = 1;
    for(int i = n;i>0;i--) fact *= i;
    cout<<fact<<endl;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    factorial(n);
    return 0;
}
