//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

int power(ll x, unsigned ll y, int p)  
{  
    ll res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  

void solve(){

	ll n , a;
	cin >> n >> a;

	ll ans = 0;
	ll arr[n+3] = {0};
	arr[1] = a;

	ans = arr[1];
	arr[2 ] = (a*a)%mod;
	ll temp;

	forn(i,3,n+2){
		temp = arr[i-1];
		arr[i-1] = power(arr[i-1] , 2*i - 3 , mod);
		ans = (ans + arr[i-1])%mod;
		arr[i] = (arr[i-1] * temp)%mod;
		//arr[i] = (arr[i] * arr[i-1] ) % mod;

	}

	cout <<ans<< endl;



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
