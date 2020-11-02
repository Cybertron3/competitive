//PLUS ULTRA
//one who atops 

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

ll add(ll x, ll y){
	return (x + y)%mod;
}

ll mul(ll x , ll y){
	return (x*y)%mod;
}

ll md(int x){
	x = x % mod;
	if(x < 0)x = x + mod;

	return x;
}

void solve(){

    ll n , k;
    cin >> n >> k;

    ll ans =   (n*(n+1)) ;
    ans = ans % mod;

    if(n==0){
    	k--;
    	ans = k*(k+1);
    	cout << ans % mod << "\n";
    	return;

    }

    if(k == 1){
    	cout << md(ans - n)  << "\n";
    	return;
    }

    k--;
    if(k%2 == 1){
    	ans = add(ans , n);
    	k--;
    
	    k = k / 2;
	    ans = add(ans ,mul(2 , mul(n , k)) );

	    ll temp = (k*(k+1));
	    // temp = temp / 2;

	    temp = temp % mod;

	    ans = add(ans , temp );


	    cout << ans << "\n";


    
    }   else{
    	

    	 // cout << ans << endl;
    
    
	    k = k / 2;
	    ans = add(ans , mul(2 , mul(n , k) ) );

	   // cout << k << endl;


	    ll temp = (k*(k+1));
	    // temp = temp / 2;

	   // cout << temp << endl;

	    temp = temp % mod;

	    // cout << temp << endl;
	    // cout << ans << endl;


	    ans = (ans + temp )%mod;


	    cout << md(ans - n) << "\n";



    }


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
