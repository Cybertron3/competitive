
// from a scalar

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007
#define forn(i,n) for(int i = 0; i < n ; i++)

ll moding( ll x , ll y ){
   
    ll ans = x % y;

    if(ans < 0)ans = ans + x ;

    return ans ;

}

bool isprime(ll n){
    if(n==2) return true;
    if(n==3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    ll i = 5,w=2;

    while(i*i <= n){
        if(n%i == 0)return false;

        i += w;
        w = 6 - w;
    }

    return true;
}




int main(){

	int n; sd(n);

	int x[n] , y[n];

	forn(i,n){
		sd(x[i]); sd(y[i]);
	}

	ll ans = 0;

	forn(i,n){

		bool l = false , r = false, u = false , d = false;

		forn(j,n){
			if(x[i] < x[j] && y[i] == y[j]) r = true;
			else if(x[i] > x[j] && y[i] == y[j]) l = true;
			if(x[i] == x[j] && y[i] > y[j]) u = true;
			if(x[i] == x[j] && y[i] < y[j]) d = true;

		}

		if( l && r && u && d) ans++;

			
	}

	pld(ans);

    


           
     
     
        
    return 0;
}
