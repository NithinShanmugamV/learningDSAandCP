//program to print all prime numbers between 2 given numbers.

#include <bits/stdc++.h>
#include<iostream>

using namespace std;

void primeNumsBwRange(int a, int b){
    int flag = 0;
    for(int i=a;i<=b;i++){
        for(int j=2;j<=sqrt(i);j++){
            if(i%j== 0) {
                flag++;
                break;
            }
            else continue;
        }
        if(flag>0){
            flag = 0;
        }
        else cout<<i<<endl;
    }
}

int main(){
    int num1,num2;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    primeNumsBwRange(num1,num2);
    return 0;

}
