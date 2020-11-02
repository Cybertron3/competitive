#include<bits/stdc++.h>
using namespace std;

//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


const int MOD = 1e9+7, N = 1e7 + 10;


int main(){

	int t; sd(t);
	
	while(t--){
		int n; sd(n);
		
		int arr[n];
		for(int i = 0; i< n ;i++) sd(arr[i]);
		ll ans = 0;
		
		
		
		for( int i = 0; i < n ; i++){
			int rox = arr[i];
			
			for(int j = i+1 ; j < n ; j++){
				rox = rox ^ arr[j];
				if(rox == 0 ){
					ans += (j-i );
				
					
				}
			}	
		}
		

		pld(ans);
		
		
	}


	return 0;
}


