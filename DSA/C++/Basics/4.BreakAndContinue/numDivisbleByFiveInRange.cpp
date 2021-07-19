/*
Write a program to print all numbers till n that are divisible by 5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter till which we have to find num divisble by 5: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%5==0) cout<<i<<"\n";
        else continue;
    }
}
