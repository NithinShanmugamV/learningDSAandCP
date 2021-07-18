#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a range in which prime number should be printed: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int j;
        for(j=2;j<i;j++){
            if (i%j==0){
                break;
            }
        }
        if(i==j) cout<<j<<" "<<"\n";
    }
    return 0;
}
