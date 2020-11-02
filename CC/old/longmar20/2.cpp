#include<bits/stdc++.h>
using namespace std;


int one(int x){
	int n = 0;
	while(x){
		if(x%2 == 1)n++;
		x = x / 2;
	}

	return n%2 ? 0 : 1;

}


int main(){

	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t; cin >> t;

	while(t--){
		int n , q;
		cin >> n >> q;

		int arr[n];

		for(int i = 0; i< n ; i++)	cin >> arr[i];
		long long  ev = 0 ;		

		while(q--){
			int p; cin >> p;
			ev = 0;
			for(int i = 0; i< n ; i++)ev += one(p^arr[i]);
			cout << ev << " " << n - ev << endl;
		}

		

	
	}




	return 0;
}