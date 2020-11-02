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
const int N = 1e5 + 10 , mod =  1000000007;

std::vector<pii> v[100001];

void solve(){

	int n , m; cin >> n >> m;
	int a , b , w;

	for(int i =0 ; i < n ; i++){
		cin >> a >> b >> w;
		v[a].pb({b,w});
		v[b].pb({a,w});
	}

	std::vector<ll> dp(n+1 , 10000000000000);


	for(int i = 0 ; i < n ; i++){
		
	}






    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
