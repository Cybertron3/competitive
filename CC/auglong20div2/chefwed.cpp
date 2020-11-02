#include<bits/stdc++.h>
using namespace std;

#define forn(i,st,n) for(int i = st; i < n ; i++)
#define rev(i,st,n) for(int i = st; i >= n ; i--)
#define ll long long

void solve();

int main(){

	int t; cin >> t;

	while(t--){
		solve();
	}
	return 0;
}

/*
	input:

	4
	8 3
	1 2 3 1 2 3 2 2
	8 3
	2 2 3 2 1 3 2 1
	7 3
	1 2 3 4 1 2 3
	11 3
	1 1 3 4 5 6 1 3 4 5 6

	output:

	9
	9
	6
	8





*/


void solve(){
	int n , k ;
	cin >> n >> k;

	int F[n];

	for(int i = 0; i< n; i++){
		cin >> F[i];
	}


	// int back[n][101];
	// memset(back, 0 , sizeof(back));
	// back[n-1][F[n-1]]++;

	// for(int i = n-2; i >= 0; i--){
	// 	for(int j = 1; j <= 100; j++){
	// 		back[i][j] = back[i+1][j];
	// 	}
	// 	back[i][F[i]]++;
	// }

	// int front[n][101];
	// memset(front , 0 , sizeof(front));

	ll cost[n+1];
	memset(cost , 0 ,sizeof(cost));
	cost[0] = k;
	// front[0][F[i]]++;

	ll dispute;
	int freq[101];

	forn(i,1,n+1){
		
		memset(freq , 0 ,sizeof(freq));

		cost[i] = INT_MAX;

		dispute = 0;
		rev(j,i-1,0){
			freq[F[j]]++;
			if(freq[F[j]] == 2)dispute += 2;
			else if(freq[F[j]] > 2)dispute++;

			if(dispute+cost[j] < cost[i] ){
				cost[i] = dispute + cost[j];
			}
		}
		
		cost[i] += k;

	}

	cout << cost[n] - k << "\n";



	// int freq[101];
	// memset(freq , 0 , sizeof(freq));

	// long long cost = k;
	// long long dispute = 0; 

	// for(int i = 0; i< n; i++){
	// 	freq[F[i]]++;

	// 	if(freq[F[i]] == 2 || (freq[F[i]] > 2 && back[i][F[i]] == 1)){
	// 		int flag = 0;
	// 		freq[F[i]]--;
	// 		for(int j = 1; j < 101; j++){
	// 			if(freq[j] == 1 && back[i][j] > 0 ){
	// 				if(back[i][j] == 1){
	// 					flag += 2;
	// 				}else{
	// 					flag++;
	// 				}
	// 			}else if(freq[j] > 1 && back[i][j] == 1 ){
	// 				flag++;
	// 			}
	// 		}
	// 		// cout << flag << "\n";

			

	// 		if(flag >= k ){
	// 			cost += k;
	// 			memset(freq , 0, sizeof(freq));
	// 			freq[F[i]]++;
				
	// 		}else{
	// 			freq[F[i]]++;
	// 			if(freq[F[i]] == 2){	
	// 				cost += 2;
	// 			}else{
	// 				cost++;
	// 			}
	// 		}

			
	// 		// cout << cost << "\n";

	// 	}else if(freq[F[i]] > 2){
			
	// 		cost++;
	// 	}

	// 	// cout << cost << "\n";

	// }


	// cout << cost << "\n";

	// for(int i = 0; i< n ; i++ ){
	// 	freq[F[i]]++;
	// 	temp = 0;
	// 	if(freq[F[i]] > 2)temp = 1;
	// 	else if (freq[F[i]] == 2)temp = 2;
	// 	if( freq[F[i]] - 1 >= k ){
	// 		memset(freq , 0 , sizeof(freq));
	// 		freq[F[i]]++;
	// 		dispute += k;

	// 	}else{
	// 		if(freq[F[i]] > 2)	dispute++;
	// 		else if(freq[F[i]] == 2)dispute += 2;
	// 	}

	// // cout << dispute  << "\n";

		
	// }

	// cout << dispute + k << "\n";



}