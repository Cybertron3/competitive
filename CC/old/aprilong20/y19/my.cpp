#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

	int t; cin >> t;

	while(t--){
		ll n; cin >> n;

		int arr[n];
		for(int i = 0; i < n ; i++){
			cin >> arr[i];
		}

		int twofactor[n];

		memset(twofactor , 0 , sizeof(twofactor));

		for(int i = 0; i< n; i++){
			if(arr[i]%2 == 0){
				if(arr[i]%4 == 0)twofactor[i] = 2;
				else twofactor[i] = 1;
			}
		}

		ll ans = 0 ;

		ll  len = 0;


		for(int i = 0; i< n; i++){
			if(twofactor[i] == 0){
				for( ; i < n; i++){
					if(twofactor[i] == 0)len++;
					else break;

				}
			}

			ans +=  (len*(len+1))/2;
			len = 0;


		}


		
		ll zer = 0 , tmp ;

		// zer will store value of len of subseq of zero


		for(int i = 0; i< n; i++){
			if(twofactor[i] == 0)zer++; // update len of zero subseq
			else if(twofactor[i] == 2){
				// num is div by 4 , so we are updating the ans

				ans +=  (ll) ((n-i)*(zer + 1) );
				zer = 0;

			}else{
				//for 1, i will check if next non zero element in twofactor
				i++;
				tmp = zer;
				zer = 0;
				// tmp will store the cur len of zero subseq value 
				// tmp will store the len of zero subseq which lies inside 
				// this subseq , so that is can be used for the next element
				while(i < n && twofactor[i] == 0){
					i++;
					zer++;
				}
				ans += (ll)(n-i)*(tmp + 1);
				/*
					while loop will break only when i== n or twofactor[i] != 0
					So check if i == n break the loop
					n - i = 0 (if i == n) , so ans-update statement will 
					remain correct .
					

				*/

				if(i == n)break;


				i--;

				


			}
		}


		cout << ans << endl;




	}






	return 0;
}