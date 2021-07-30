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

    int  n , k , d;

    cin >> n >> k >> d;

    ll dp[n+1];
    memset(dp , 0 , sizeof(dp));
    dp[0] = 1;

    for(int i = 1;i <= n ; i++){
    	for(int j = 1; j <= k ; j++){
    		if(i-j>= 0) dp[i] = (dp[i] + dp[i-j])% mod;

    		else break;
    	}

    }

    ll dp2[n+1];
    memset(dp2 , 0 , sizeof(dp2));
    dp2[0] = 1;

    for(int i = 1;i <= n ; i++){
    	for(int j = 1; j < d ; j++){
    		if(i-j>= 0) dp2[i] = (dp2[i] +  dp2[i-j] )% mod;

    		else break;
    	}

    }

    dp[n] -= dp2[n];

    if(dp[n] < 0)dp[n] += mod;

    cout << dp[n] << "\n";

    



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


