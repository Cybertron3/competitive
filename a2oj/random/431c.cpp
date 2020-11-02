#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007

     
     
int main(){


	int n , k , d;
	sd(n); sd(k) , sd(d);


	ll dp[101] = {0};

	dp[0] = 0;


	ll ksum = 0;

	for(int i =1; i<= k ;i++){

		dp[i] = (1 + ksum)%moder ;

		ksum = (ksum + dp[i]) % moder;

	//	cout << "dp[" << i << "]  = " << dp[i] << " , ksum =  "<< ksum << endl;


	}

	for(int i = k+1 ; i<= n ; i++){

		dp[i] = ksum % moder;

		ksum = ( ((ksum + dp[i])) - dp[i-k] ) % moder ; 
		if(ksum < 0) ksum = moder + ksum ;

	//	cout << "dp[" << i << "]  = " << dp[i] << " , ksum =  "<< ksum << endl;
		
		
		 


	}

	ll dp2[101] = {0};

	ll dsum = 0;

	int i ;

	for( i = 1 ; i<= d - 1; i++ ){


		dp2[i] = ( 1 + dsum )%moder ;

		dsum = (dsum + dp2[i]) % moder ;

	}

	for( ; i <= n ; i++ ){
		dp2[i] = dsum % moder ;

		dsum = (((dsum +dp2[i]) )- dp2[i- (d-1)] ) % moder;
		if(dsum < 0)dsum = moder + dsum;

	}

//	cout << "dp[n] = " << dp[n] << "  dp2[n] = " << dp2[n] << endl;

	ll ans = dp[n] - dp2[n];

	if(ans < 0)ans = moder + ans ;

	pld(ans);




	

           
     
     
        
    return 0;
}
