//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;


ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        
        if (y & 1) 
            res = (res*x) % p; 
  
       
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
}

ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
}



int main(){
    SPEED;

    int n , k ,t; cin >> t;

    ll inp;

    while(t--){

      
        cin >> n >> k;

        while(n--){
            cin >> inp;

            ll x = power(52 + 2*k ,(ll) inp /2 ,mod  ) ;
            ll y =  modInverse( power(52 ,inp , mod ) , mod)  ;

            if(inp % 2 == 1){
                x = (x * 52)%mod;
            }

            cout << (x * y)% mod << endl;

        }





    }

    
    return 0;
}
      
       
