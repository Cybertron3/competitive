//PLUS ULTRA


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

const int N = 1e5 + 10 , mod =  1000000007;

int fact[1000 + 100];


ll power(ll x, unsigned ll y, unsigned ll m); 
  
ll modInverse(ll a, ll m) { 
    return power(a, m-2, m);    
} 
  
ll power(ll x, unsigned ll y, unsigned ll m){ 
    if (y == 0) 
        return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 

void calc(){
    ll p = 1;
    fact[0] = 1;
    forn(i,1,1000 + 50){
        p = (p*i)%mod;
        fact[i] = p;
    }
}

void solve(){

    ll n , m; cin >> n >> m;

    if(n%2 == 1){
        cout << "0\n";
        return;
    }

    ll ans = (((fact[n] *modInverse(fact[n/2], mod))%mod ) * modInverse(fact[n/2] , mod))%mod;

    ans = power(ans ,m , mod );


    cout << ans <<"\n";



    
    
        


}

int main(){
    calc();
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
