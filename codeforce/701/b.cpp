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

    int n  , q , k;
    cin >> n >> q >> k;

    int arr[n];
    ll mid[n] = {0};
    int strt[n] = {0};
    int end[n] = {0};

    for(int i = 0; i< n; i++){
    	cin >> arr[i];
    }

    for(int i = 0; i + 1 < n; i++){
    	strt[i] = arr[i+1] - 2; 
    }

    for(int i = 1; i + 1 < n ; i++){
    	mid[i] = arr[i+1] - arr[i-1] - 2;
    }
    for(int i = 1; i < n ; i++){
    	mid[i] += mid[i-1] ;
    }

    for(int i = 1; i < n ; i++){
    	end[i] = k - arr[i-1] - 1;
    }



    // for every query
    int l , r;
    while(q--){
    	cin >> l >> r;
    	l--; r--;
    	if(r-l == 0){
    		cout << k-1 << "\n";

    	}else if(r-l == 1){
    		cout << arr[r] - 2 + k - arr[l] - 1 << "\n";

    	}else{
    		ll ans = 0;

    		ans += strt[l];
    		ans += end[r];
    		if(l == 0)ans += (mid[r-1] );
    		else ans += (mid[r-1] - mid[l]);

    		cout << ans << "\n";


    	}


    }
    



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


