#include<bits/stdc++.h>
using namespace std;

int binarySearch(int beg, int n, int key, int arr[]){
	int mid = (beg+(n-1))/2;
	cout<<beg<<" "<<n<<" "<<mid<<" "<<endl;
	if(arr[mid]== key) return mid;
	else if(arr[mid]>key) binarySearch(beg,mid-1,key,arr);
	else  binarySearch(mid+1,n,key,arr);
	return -1;
}

int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	 #endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<binarySearch(0,n-1,key,arr);
	return 0;
}