#include<bits/stdc++.h>
using namespace std;



long long  solve(int n , int k , int F[]);
long long solve1(int n , int k , int F[]);

int gen(int p){
	long long x = rand();
	x = x * x;
	if(x < 0)x = -1*x;

	x = x % p;
	return x + 1;
}

int main(){

	int t = 1;

	srand(time(0));

	while(t++){
		int n , k ;
		n = gen(10) ;
		k = gen(10);
		if(k == 1)k =2;

		int F[n];

		for(int i = 0; i< n; i++){
			F[i] = gen(100);
		}

		if(solve1(n , k , F) != solve(n , k , F) ){
			cout << n << " " << k << "\n" ;
			for(int i = 0; i< n; i++){
				cout << F[i] << " ";
			}
			cout << "Ans = " << solve1(n , k , F) << "\n";
			break;
		}else{
			cout << "OK" << t << "\n";

		}
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


long long solve1(int n , int k , int F[]){
	

	int back[n][101];
	memset(back, 0 , sizeof(back));
	back[n-1][F[n-1]]++;

	for(int i = n-2; i >= 0; i--){
		for(int j = 1; j <= 100; j++){
			back[i][j] = back[i+1][j];
		}
		back[i][F[i]]++;
	}

	int freq[101];
	memset(freq , 0 , sizeof(freq));

	long long cost = k;
	long long dispute = 0; 

	for(int i = 0; i< n; i++){
		freq[F[i]]++;

		if(freq[F[i]] == 2 || (freq[F[i]] > 2 && back[i][F[i]] == 1)){
			int flag = 0;
			freq[F[i]]--;
			for(int j = 1; j < 101; j++){
				if(freq[j] == 1 && back[i][j] > 0 ){
					if(back[i][j] == 1){
						flag += 2;
					}else{
						flag++;
					}
				}else if(freq[j] > 1 && back[i][j] == 1 ){
					flag++;
				}
			}
			// cout << flag << "\n";

			

			if(flag >= k ){
				cost += k;
				memset(freq , 0, sizeof(freq));
				freq[F[i]]++;
				
			}else{
				freq[F[i]]++;
				if(freq[F[i]] == 2){	
					cost += 2;
				}else{
					cost++;
				}
			}

			
			// cout << cost << "\n";

		}else if(freq[F[i]] > 2){
			
			cost++;
		}

		// cout << cost << "\n";

	}


	// cout << cost << "\n";
	return cost;

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



long long solve(int n , int k , int F[]){
	

	int back[n][101];
	memset(back, 0 , sizeof(back));
	back[n-1][F[n-1]]++;

	for(int i = n-2; i >= 0; i--){
		for(int j = 1; j <= 100; j++){
			back[i][j] = back[i+1][j];
		}
		back[i][F[i]]++;
	}

	int freq[101];
	memset(freq , 0 , sizeof(freq));

	long long cost = k;
	long long dispute = 0; 

	for(int i = 0; i< n; i++){
		freq[F[i]]++;

		if(freq[F[i]] == 2 || (freq[F[i]] > 2 && back[i][F[i]] == 1)){
			int flag = 0;
			freq[F[i]]--;
			for(int j = 1; j < 101; j++){
				if(freq[j] == 1 && back[i][j] > 0 ){
					if(back[i][j] == 1){
						flag += 2;
					}else{
						flag++;
					}
				}else if(freq[j] > 1 && back[i][j] == 1 ){
					flag++;
				}
			}
			// cout << flag << "\n";

			freq[F[i]]++;

			if(flag >= k ){
				cost += k;
				memset(freq , 0, sizeof(freq));
				
			}else{
				if(freq[F[i]] == 2){	
					cost += 2;
				}else{
					cost++;
				}
			}

			
			// cout << cost << "\n";

		}else if(freq[F[i]] > 2){
			
			cost++;
		}

		// cout << cost << "\n";

	}


	return cost;




}