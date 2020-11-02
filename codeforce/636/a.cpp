//PLUS ULTRA
//escanor 

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

void solve(){
    
	ll n ;cin >> n;

	ll sum = 3 , p = 2;
	ll ans = 0;

	while(sum <= n ){
		if(n % sum == 0 ){
			ans = n / sum;
			break;
		}
		else{
			p *= 2;
			sum += p;
		}
	}


	cout << ans << endl;



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
