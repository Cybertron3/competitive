#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
	ll n;
	sld(n);

	ll x ,sum = 0;

	for(ll i = 2; i < n ; i++){
		ll k = n/i;
		if(n%i == k){
			sum += i;
			i += (i -1) - k ;
		}
	}            
           
     pld(sum);
     
        
    return 0;
}
