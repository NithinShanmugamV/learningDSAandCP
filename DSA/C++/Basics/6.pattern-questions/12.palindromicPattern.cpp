/*
In this program we will get one integer and print a 0-1 pyramid.
For example, If you get 5,
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

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
            cout<<j<<" ";
        }
        if(i>=2){
            for(int j=2;j<=i;j++){
                cout<<j<<" ";
            }
        }
        
        cout<<endl;
    }
    return 0;
}