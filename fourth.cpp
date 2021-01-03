#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll, ll>;


//pairs
#define ss second
#define ff first


// vectors
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down

void fun(std::vector<int> grp[] , bool vis[] , int i , int &cnt ){
	
	vis[i] = true;
	cnt++;

	FOR(j , 0 , grp[i].size()){

		if(!vis[grp[i][j]]){
			fun(grp , vis , grp[i][j] , cnt );

		}
	}


}

void solve() {

    int n ; cin >> n;
    int arr[n][n];

    std::vector<int> grp[n*n + 1];

    FOR(i,0,n){
    	FOR(j,0,n){
    		cin >> arr[i][j];
    	}
    }

    int k ; cin >> k;

    bool vis[n*n + 1];
    memset(vis , false , sizeof(vis));

    

    FOR(i,0,n){
    	FOR(j,0,n){
    		if(i+1 < n && arr[i][j] == 1 && arr[i+1][j] == 1 ){
    			grp[i*n + j].pb((i+1)*n + j);
    			grp[(i+1)*n + j].pb(i*n + j);
    		}
    		if(j+1 < n && arr[i][j] == 1 && arr[i][j+1] == 1){
    			grp[i*n + j].pb(i*n + j + 1);
    			grp[i*n + j + 1].pb(i*n + j);
    		}
    		// if(i+1 < n && j + 1 < n && arr[i][j] == 1 && arr[i+1][j+1] == 1){
    		// 	grp[i*n + j].pb((i+1)*n + j + 1);
    		// 	grp[(i+1)*n + j + 1].pb(i*n + j);
    		// }
    	}
    }

    int cnt = 0;

    FOR(i,0,n){
    	FOR(j,0,n){
    		if(!vis[i*n + j]){
    			cnt = 0;
    			fun(grp , vis , i*n + j , cnt);

    			if(cnt == k){
    				cout << i  << " " << j  << "\n";
    				return;
    			}
    		}
    	}
    }
    

    cout << "-1 -1\n";

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    // time_t start , end;

    // time(&start);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


