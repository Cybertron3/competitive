#include<bits/stdc++.h>
using namespace std;

void solver(){
	int n ; cin >> n;
	std::vector<int> arr(n);
	for(int i =0 ; i< n ; i++){
		cin >> arr[i];
	}

	sort(arr.begin() , arr.end());

	long long ans = 0;

	for(int i = 1; i < n-1; i++){
		ans = max(ans , (long long) abs(arr[n-1] - arr[i]) + abs(arr[n-1] - arr[0]) + abs(arr[i] - arr[0]) );
	}

	cout << ans << "\n";


}


int main(){

	int n; cin >> n;

	while(n--){
		solver();
	}

	return 0;
}