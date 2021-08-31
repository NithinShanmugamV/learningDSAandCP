#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = n;i>0;i--) fact *= i;
    return fact;
}
void pascalTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j = 0 ;j<=i;j++){
            cout<<(factorial(i)/(factorial(i-j)* factorial(j)))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    pascalTriangle(n);
    return 0;
}
