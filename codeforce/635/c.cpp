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

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

std::vector<int> v[n+1];

bool visited[n+1] ;

int ans[n+1];

void letsgo(int u , int x){
	if(visited[u] == true)return;
	else visited[u] = true;

	ans[u] = x-1;

	int i = 0;
	while( i < visited[u].size()){
		letsgo(visited[u][i]);
	}

}



void solve(){

	int n , k;
	cin >> n >> k;

	int u,v;

	
	memset(visited , false , sizeof(visited));


	forn(i,0,n){
		cin >> u >> v;
		visited[u].pb(v);
		visited[v].pb(u);
	}

	letsgo( 1, 1);

	sort(ans , ans+(n+1));

	ll 

	for(int i = n; i > max(0,n-k) ; i-- ){


	}





}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
