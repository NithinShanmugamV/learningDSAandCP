#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = n;i>0;i--) fact *= i;
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int ncr = (factorial(n)/(factorial(n-r)* factorial(r)));
    cout<<ncr;
    return 0;
}

