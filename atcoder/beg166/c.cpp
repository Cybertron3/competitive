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

	int n ,m ; cin >> n >> m;
	std::vector<int> obs[n+1];

	int h[n+1];
	forn(i,1,n+1)cin >> h[i];

	int u  , v;

	forn(i,0,m){
		cin >> u >> v;
		obs[u].pb(v);
		obs[v].pb(u);

	}

	int ans = 0;
	bool flag ;

	forn(i,1,n + 1){
		// bool flag = true;

		flag = true;
		int siz = obs[i].size();
		forn(j,0,siz){
			
			if(h[i] <= h[obs[i][j] ] ){
				flag = false;
				break;
			}
		}

		// if(flag)cout << i << "\n";

		if(flag)ans++;

	}


	cout << ans << "\n";
    
        


}

int main(){
    SPEED;

    solve();


    return 0;
}
      
       
