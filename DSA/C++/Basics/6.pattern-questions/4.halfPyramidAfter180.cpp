/*
In this program we will get one integer and print a half pyramid.
For example, If you get 5 as integer then,

    *
   **
  ***
 ****
*****

Why is it called half pyramid after 180deg. 
Normal half pyramid
*
**
***
****
*****

Rotate normal half pyramid by 90 deg
*****
****
***
**
*

Rotate normal half pyramid by 1800 deg

    *
   **
  ***
 ****
*****
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            if(j > i){
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<endl;

    }
    return 0;
}
