#include<bits/stdc++.h>
using namespace std;
vector<int> removeEle(vector <int> arr,int k){
    for(int i=0;i!=k;i++){
        arr.pop_back();
    }
    return arr;
}
vector<int> removeElement(vector <int> arr,int key){
    vector<int> newArr;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == key) continue;
        else newArr.push_back(arr[i]);
    }
    return newArr;
}
vector<int> maxOccurrence(vector <int> arr, int k){
    vector<int> status;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count > max_count){
        max_count = curr_count;
        res = arr[n - 1];
    }

    status.push_back(max_count);
    status.push_back(res);
    return status;
}

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
        int steps = 0;
        for(int i = 0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
        vector<int> status = maxOccurrence(arr,k);
            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            for(int i = 0;i<status.size();i++){
                cout<<status[i]<<" ";
            }
            cout<<endl;
        while(arr.size()>0){
            vector<int> status = maxOccurrence(arr,k);
            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            for(int i = 0;i<status.size();i++){
                cout<<status[i]<<" ";
            }
            cout<<endl;
            if(k<status[0]){
                arr = removeElement(arr,status[1]);
            }
            if(k<status[0]){
                arr = removeEle(arr,k);
            }
        }
        cout<<endl;
        cout<<steps<<endl;
    }
}