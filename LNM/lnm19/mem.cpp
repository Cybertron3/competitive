//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const ll int N = 1e5 + 10 , mod =  1000000007;


ll gcd(ll a, ll b) { 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
}  

ll power(ll x, unsigned ll y, unsigned ll m) { 
    if (y == 0) 
        return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 
  

ll modInverse(ll a, ll m) 
{ 
   
    return power(a, m-2, m); 
   
} 
  


void solve(){

    ll x; cin >> x;

    ll y , g;
    ll cnt  = 0;

    // if(x==1)cnt = 1;

    for( y = 1; y < x ; y++){
    	g = gcd(x  , y);
    	if(g == 1){
    		// cout << "y = " << y <<  ;
    		cnt++;
    	}

    }

    ll ans = ( modInverse(cnt15, mod) )%mod ;

    cout << ans << "\n";


    
    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
