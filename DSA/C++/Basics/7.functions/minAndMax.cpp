#include<bits/stdc++.h>
using namespace std;

void maxAndMin(int n, int arr[]){
    int minn = INT_MAX;
    int maxx = INT_MIN;
    for(int i=0;i<n;i++){
        maxx = max(arr[i],maxx);
        minn = min(arr[i],minn);
    }
    cout<<"Minimum: "<<minn<<endl;
    cout<<"Maximum: "<<maxx<<endl;
}

int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxAndMin(n,arr);
    return 0;
}

