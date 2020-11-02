#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){

	int t; cin >> t;
	while(t--)solve();
}


void solve(){
	int  n, k; cin >> n >> k;
	int arr[n];
	for(int i = 0; i< n; i++){
		cin >> arr[i];

	}

	sort(arr , arr+n);

	int ans = arr[n-1] - arr[0];

	for(int i = k-1; i < n; i++ ){
		if(ans > arr[i] - arr[i-(k-1)]){
			ans = arr[i] - arr[i-(k-1)];
		}
	}

	cout << ans << "\n";
}