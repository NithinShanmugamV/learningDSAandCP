/*
Write a program to add and subtract 2 numbers using functions and print a given number using functions..

*/



#include <bits/stdc++.h>
using namespace std;

void print(int sum){
    cout<<sum;
}


int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}

int main(){
    int a,b;
    cout<<"Enter  number1: ";
    cin>>a;
    cout<<"Enter number2: ";
    cin>>b;
    int sol = add(a,b);
    int sol1 = sub(a,b);
    cout<<"Sum of two numbers: ";
    print(sol);
    cout<<endl;
    cout<<"Difference of two numbers: ";
    print(sol1);
    cout<<endl;
    return 0;
}
