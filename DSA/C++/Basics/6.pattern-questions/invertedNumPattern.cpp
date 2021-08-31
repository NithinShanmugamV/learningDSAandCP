#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    //cout<<"Enter number: ";
    cin>>n;
    /*
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j<=i) cout<<j<<" ";
        }
        cout<<endl;
    }*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n+1-i) cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
