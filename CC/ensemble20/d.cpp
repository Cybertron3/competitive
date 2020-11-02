#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		for(int i = 0; i< n; i++)cin >> arr[i];

		int ans = 0;
		for(int i = 0; i < n ; i++){
			for(int j = i+1; j < n ; j++ ){
				if(arr[i] == (arr[i] & arr[j])){
					ans++;
				}
			}
		}

		cout << ans << "\n";
	}

	return 0;
}