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

void solve(){

	int n; cin >> n;

	string str; cin >> str;

	std::vector<int> r , g;

	forn(i,0,n){
		if(str[i] == 'R')r.pb(i+1);
		else if(str[i] == 'G')g.pb(i+1);
	}

	bool flag ;

	ll ans = 0 , ad = n - r.size() - g.size() ;
	int tmp;

	forn(i,0,r.size()){

		forn(j,0,g.size()){
			ans += ad;
			
			flag = true;
			int mini = min(r[i] , g[j]);
			int maxi = max(r[i] , g[j]);

			tmp = mini + maxi;

			if(tmp%2 == 0 && tmp/2 <= n && tmp/2 >=1 && str[(mini + maxi)/2 - 1] == 'B'){
					ans--;

			}
			
			tmp = 2*mini - maxi; 

			if(tmp >= 1 && tmp <= n && str[tmp-1] == 'B' ){
				ans--;
			}

			tmp = 2*maxi - mini;

			if(tmp >= 1 && tmp <= n && str[tmp -1 ] == 'B')ans--; 
			





		}

	}

	cout << ans << endl;
    



}

int main(){
    SPEED;

    solve();

    return 0;
}
      
       
