#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 
     
     
int main(){

	int t; sd(t);

	while(t--){
		ll x ; sld(x);

		ll ans = 0;

		if(x <= 4 )ans = x;
		else{

			x = 2*(x - 3);

			ll n , d;

			d = 1+ 4*x ;

			ll rd = sqrt(d);

			ans  = (-1 + rd)/2;

			

			ans += 3;

		}

		pld(ans);

	}
           
     
     
        
    return 0;
}
