/*
In this program we will get one integer and print a 0-1 pyramid.
For example, If you get 5,

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

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
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<"1"<<" " ;
            else cout<<"0"<<" " ;
        }
        cout<<endl;
    }
    return 0;
}