#include<iostream>
using namespace std;
void reverseArray(int n, int arr[]){
    int start = 0;
    int last = n -1;
    int temp;
    while(start<last){
        temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
}
int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(n, arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
