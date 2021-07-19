// Program to find the maximum among three numbers

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"Maximum of three numbers is: "<<a<<endl;
        }
        else {
            cout<<"Maximum of three numbers is: "<<c<<endl;
        }
    }
    if(a<b){
        if(b>c){
            cout<<"Maximum of three numbers is: "<<b<<endl;
        }
        else {
            cout<<"Maximum of three numbers is: "<<c<<endl;
        }
    }
    return 0;
}
