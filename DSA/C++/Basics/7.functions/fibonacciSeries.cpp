#include <iostream>
using namespace std;

void fibonacciSeries(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    int i=0;
    while(i<n){
        cout<< t1 <<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    fibonacciSeries(n);
    return 0;
}
