//PLUS ULTRA
//one who atops 

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

const int N = 1e5 + 10 , mod =  998244353;

ll power(ll x, unsigned ll y, ll p)  
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
    return res - 1 ;  
}  
  
ll add(ll x, ll y){
	return (x+y)%mod;
}

ll mul(ll x , ll y ){
	return (x*y)%mod;
}



void solve(){

	int n; cin >> n;

	int arr[n] ; 
	forn(i,0,n)cin >> arr[i];

	sort(arr , arr + n);

	ll cnt = 0 , lcnt = 0 ,  fd = 1;
	ll ans = 1 , prob = 1 , tmp;

	// int used = -1;
	bool used = false;

	forn(i,0,n){
		if(arr[i] != fd){
			// cout << "blajsn" << endl;

			ans = add(ans , mul(fd ,( power( 2 , n - i , mod )   )%mod ));
			// cout << ans << endl;
			fd = -1;
			break;
		}
		for( ; i<n ; i++){
			if(arr[i] != fd){
				if(!used){
					used = true;
					ans = add(ans , mul(fd ,( power( 2 , n - i  , mod )  )%mod ));
				}
				// cout << ans << endl;
				tmp =  mul(prob , power(2 , lcnt , mod));
				ans = add(ans , mul(fd + 1 , mul(prob , power(2 , lcnt , mod))));
				i--;
				fd++;
				prob = tmp;

				// cout << " sbdfbvkdjvnerkvb   " << ans << endl;
				lcnt = 0;
				break;
			}
			else{
				cnt++;
				lcnt++;
			}
		}


		
	}

	ans = add(ans , mul(fd + 1 , mul(prob , power(2 , lcnt , mod))));


	// ans = add(ans , mul(fd + 1 , power(2 , n-fd , mod)));
	



	cout << ans << endl;



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
