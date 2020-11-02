//For 30 points
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

void solve();



int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}

	return 0;
}

void solve(){
	int n; cin >> n;

	int u, v;

	int city[n+1][n+1];
	memset(city , 0 , sizeof(city));

	for(int i = 0; i < n; i++){
		cin >> u >> v;
		city[u].push_back(v);
		city[v].push_back(u);
	}

	int p[n];

	for(int i = 0; i< n ; i++){
		cin >> p[i];
	}

	int population[n];

	for(int i =0 ; i< n; i++){
		cin >> population[i];
	}

	int fruits[n];
	for(int i =0; i< n; i++){
		cin >> fruits[i];
	}

	






}