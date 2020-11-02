#include<bits/stdc++.h>
using namespace std;

//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


const int MOD = 1e9+7, N = 1e7 + 10;

ll jindabad( int a[] , int n   );


int main(){

	int t; sd(t);
	
	while(t--){
		int n; sd(n);
		
		int arr[n];
		for(int i = 0; i< n ;i++) sd(arr[i]);
		ll ans = 0;

		unordered_map<int , int> hashMap ;
	
		
		/*
		for( int i = 0; i < n ; i++){
			int rox = arr[i];
			
			for(int j = i+1 ; j < n ; j++){
				rox = rox ^ arr[j];
				if(rox == 0 ){
					ans += (j-i );
				
					
				}
			}	
		}

		*/

		ans = jindabad( arr , n   );
		

		pld(ans);
		
		
	}


	return 0;
}


ll jindabad( int arr[] , int n   ){

	ll ans = 0;

	int prefix[n] , back[n];

	prefix[0] = arr[0];

	unordered_map< int, vector<int> > hashMap;
	hashMap[0] = -1;


	for(int i = 1; i< n ; i++){
		prefix[i] = prefix[i-1] ^ arr[i] ;
	
	}





	for(int i = 0 ; i < n ; i++){



	
	}

	

	return ans;


}