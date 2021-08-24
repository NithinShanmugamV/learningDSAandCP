/*
In this program we will get one integer and print a inverted pyramid.
For example, If you get 10,

**********
*********
********
*******
******
*****
****
***
**
*

*/




#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
