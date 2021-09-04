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
	int ans = 2;
	int pd = arr[1]-arr[0];
	int curr = 2;
	int j = 2;
	while(j<n){
		cout<<arr[j]<<" ";
		if(pd == arr[j]-arr[j-1]){
			curr++;
		}
		else {
			curr = 2;
		}
		ans = max(ans,curr);
		j++;
	}
	cout<<endl;
	cout<<ans<<endl;

	return 0;
}