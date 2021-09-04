/*
In this program we will get one integer and print a 0-1 pyramid.
For example, If you get 5,

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/



#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        if(i>=2){
            for(int j=2;j<=i;j++){
                cout<<"* ";
            }
        }
        
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        if(i>=2){
            for(int j=2;j<=i;j++){
                cout<<"* ";
            }
        }
        
        cout<<endl;
    }
    return 0;
}