/*
In this program we will get two integers and print a rectangle.
For example, If you get 4 and 6 as integers then,

******
*    *
*    *
******

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1){
                cout<<"* ";
            }
            else if(i==n){
                cout<<"* ";
            }
            else if(j==1){
                cout<<"* ";
            }
            else if(j==m){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;

    }
    return 0;
}
