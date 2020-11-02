#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	ll n , k;

	int t; sd(t);

	while(t--){
		sld(n); sld(k);

		ll ans = 0;
	

		while(n != 0){
			if(n%k == 0) n /= k;
			else {
				ans += (n % k);
				n = n -(n % k);
				
				ans--; 
			}
			ans++;
		}

		pld(ans);



	}          
     
     
        
    return 0;
}
