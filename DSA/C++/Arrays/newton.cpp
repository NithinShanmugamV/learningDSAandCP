#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
     #endif
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        int temp;
        int count = 0;
        for(int i = 0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        vector<int> arr1;
        for(int i=0;i<arr.size();i++){
            if(i==0){
                count++;
            }
            else if(arr[i]==arr[i-1]){
                count++;
            }
            else{
                arr1.push_back(count);
                count = 0;
            }
        }
        sort(arr1.begin(),arr1.end());
        count = 0;
        n = arr1.size();
        for(int i=n;i>0;i--){
            if(arr1>k){
                count++;
                arr1.pop_back();
            }
        }
        int total
        for(int i=0;i<arr1.size();i++){
            total += arr[i];
            if(total<k){

            }
        }
    }

    return 0;
}
