#include <bits/stdc++.h>
using namespace std;


void pythagoranTriplet(int x, int y, int z){
    int a = max(x, max(y,z));
    if(a == x){
        if(a*a == y*y + z*z) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    else if(a == y){
        if(a*a == x*x + z*z) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    else {
        if(a*a == x*x + y*y) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int x,y,z;
    //cout<<"Enter number: ";
    cin>>x>>y>>z;
    pythagoranTriplet(x,y,z);
    return 0;
}
