#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int t; sd(t);

	ll n;

	while(t--){
		sld(n);
		string arr;
		cin >> arr;

		int size = arr.size();

		ll k = 0;

		for(int i = 0; i < size ; i++){
			k = ( k*10 + (arr[i] - 48) ) % n;
		} 			
		// ab sare ko zero ya one hi milega;

		ll ans ;

		//cout << " k =   " << k << " ,  n = " << n << endl;

		if( 2*k > n )ans = (n - k)*2;
		else if(2*k == n)ans = n-1;
		else ans = k*2;


		pld(ans);


	}

           
     
     
        
    return 0;
}
