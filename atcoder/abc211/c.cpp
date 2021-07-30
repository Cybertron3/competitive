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


void solve() {

	/*
 c, h, o, k, u, d, a, i 
	*/

	string tmp = "chokudai";

    string str;
    cin >> str;

    int n  = str.size();

    int dp[n+1][10];

    memset(dp , 0 , sizeof(dp));

    for(int i = 1; i <= n; i++){
    	
    	for(int j = 0; j < 8; j++){
    		dp[i][j] = dp[i-1][j];
    	}

    	for(int j = 0 ; j < 8; j++){
    		if(str[i-1] == tmp[j]){
    			if(j == 0){
    				dp[i][0] = (dp[i][0] + 1 ) % mod;
    			}else{
    				dp[i][j] = (dp[i][j-1] + dp[i][j] ) % mod;
    			}

    			break;
    		}
    	}

    	// if(str[i] == 'c'){
    	// 	dp[i][0] = (dp[i][0] + 1 ) % mod;
    	// }

    	// else if(str[i] == 'h'){
    	// 	dp[i][1] = (dp[i])
    	// }

    }


    cout << dp[n][7] ;



}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);




    #ifndef ONLINE_JUDGE
        freopen("/home/ankitesh/Desktop/competitive/input.txt", "r", stdin);
        freopen("/home/ankitesh/Desktop/competitive/output.txt", "w", stdout);
    #endif

    // time_t start , end;

    // time(&start);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


