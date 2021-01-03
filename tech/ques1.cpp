#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cout << "Enter length of input array : ";
	cin >> n;
	
	int arr[n];
	cout << "Enter all the array elements\n";
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}



	int diff[n];
	
	for(int i = 1; i < n; i++){
		diff[i] = arr[i] - arr[i-1];
	}

	int count = 1 , ans = 0;
	for(int i = 1; i < n-1; i++){
		if(diff[i] == diff[i+1]){
			count++;
		}else{
			if(count > ans){
				ans =count;
			}
		count = 1;
		}
	}

	if(count > ans){
		ans = count;
	}

	cout << "length of longest arithmetic subarray is ";
	cout << ans + 1 << " .\n";
}

int main(){
	
	solve();
	return 0;

}