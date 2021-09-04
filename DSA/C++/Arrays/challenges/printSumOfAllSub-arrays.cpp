#include <iostream>
#include <climits>
using namespace std;
int main() {
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
	int sum;
	for(int i=0;i<n;i++){
		sum = 0;
		for(int j=i;j<n;j++){
			sum += arr[j];
			cout<<sum<<" ";
		}
		cout<<endl;
	}
}
/*
#include <iostream>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int maxx = INT_MIN;
	    int index = 0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>maxx){
	            maxx = arr[i];
	            index = i;
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    int count = 0;
	    for(int i=0;i<n;i++){
	        if (arr[i+k-1] == maxx){
	            for(int j=i;j<n;j++){
	                //cout<<arr[i];
	                if(j-i>=2){
	                    count++;
	                }
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

*/