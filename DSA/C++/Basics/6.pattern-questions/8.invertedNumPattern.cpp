/*
In this program we will get one integer and print a inverted pyramid.
For example, If you get 5,

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

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
        for(int j=1;j<=n;j++){
            if(j<=n+1-i) cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
