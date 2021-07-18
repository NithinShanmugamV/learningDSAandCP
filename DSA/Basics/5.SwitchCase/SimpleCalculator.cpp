// Program to write a simple calculator.

#include<iostream>
using namespace std;
int main(){
    int a,b;char ch;
    cout << "Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter your choice to do calculation. \n+ for Add \n- for Subtract \n* for Multiply \n/ for Division: ";
    cin>>ch;
    switch(ch){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Enter given choice"<<endl;
            break;
    }
    return 0;
}
