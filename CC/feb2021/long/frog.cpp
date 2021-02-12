#include<bits/stdc++.h> 
using namespace std;

void solver();

int main(){
	int t; cin >> t;
	while(t--){
		solver();
	}


	return 0;
}

void solver(){
	int inp , n; cin >> n;

	int pos[n+1];

	for(int i = 0; i < n; i++){
		cin >> inp;
		pos[inp] = i;
	}

	int L[n] ;
	for(int i = 0; i< n ; i++){
		cin >> L[i] ;
	}

	int x = pos[1]  , l = L[pos[1]];

	int ans = 0;

	for(int i = 2; i <= n ; i++){
		if(x >= pos[i]){
			l = L[pos[i]];
			int tmp = x - pos[i] + 1;
			tmp= ((tmp -1)/l + 1) ;
			ans += tmp;
			x = pos[i] + (l * tmp);
		}else{
			x = pos[i];
		}
	}

	cout <<  ans << "\n";
}