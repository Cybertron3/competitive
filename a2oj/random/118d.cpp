#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define mode 100000000

ll moder( ll x , ll y ){
	// cybertrone
	// for x % y

	ll ans = x % y;

	if(ans < 0)ans = ans + x ;

	return ans ;

}
     
int main(){

	int n1 , n2 , k1 , k2;
	sd(n1); sd(n2); sd(k1); sd(k2);

	int total = n1+n2 ;

	ll dp[total + 1];

	dp[1] = 2;

	for(int i = 2; i <  ; i++){
		dp[i] = moder(dp[i-1] * 2 ,mode ); 
		if(i>k1) dp[i] = moder(dp[i] - 
	} 

	for(int i = ; i <= total ; i++ ){



	}


        
    return 0;
}
