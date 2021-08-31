#include <bits/stdc++.h>
using namespace std;

void sumOfNaturalNum(int n){
    int sum = (n*(n+1))/2;
    cout<<sum<<endl;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    sumOfNaturalNum(n);
    return 0;
}
