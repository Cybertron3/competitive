//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define S second
#define F first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;






void solve(){

	int n; cin >> n;

	ll a[n] , b[n] ;

	ll v[n];

	for(int i = 0; i< n ; i++){
		cin >> a[i] >> b[i];
		
	}


	v[0] = max((ll) 0 , a[0] - b[n-1]);

	//cout << " v is " << v[0] << endl;

	for(int i = 1; i< n; i++){
		v[i]  =  max((ll)0 , a[i] - b[i-1] );
	}

	

	ll ans = 0;

	for(int i = 0 ; i < n ; i++){
		
		ans+=v[i];
	}

	ll mini = a[0] - v[0] ;

	forn(i,1,n){
		if(a[i] - v[i]  < mini ){
			mini = a[i] - v[i] ;
		}
	}

	// cout << ans << endl;
	// cout << mini << endl;
	cout << mini + ans << endl;







	
}



int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	solve();
    }
    

    
    return 0;
}
      
       
