#include<iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	 #endif
	bool n = (5000000&1);
	cout<<n;
	return 0;
}