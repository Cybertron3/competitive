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

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    ll n; cin >> n;

    double d   ;

    ll ans = 0 , h;

    while(n > 2){
    	ans++;

	    d= double(1 + 24.0 * n);
	    h = (-1 + sqrt(d))/6 ;

	    n -= (2*h + (3*(h-1)*h)/2);

	}

	if(n==2)ans++;

	cout << ans << "\n";
   

        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();


    return 0;
}
      
       
