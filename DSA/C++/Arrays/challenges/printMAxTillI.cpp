#include <iostream>
#include <climits>
using namespace std;

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
	int maxx = INT_MIN;
	for(int i = 0 ; i < n;i++){
		for(int j=0;j<=i;j++){
			/*
			if(maxx<arr[j]){
				maxx = arr[j];
			}*/
			maxx = max(maxx,arr[i]); 
		}
		cout<<maxx<<" ";
	}
	return 0;
}