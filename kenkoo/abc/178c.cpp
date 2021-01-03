
// read editorial
// OP solution

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

const int N = 2e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down

ll moder(ll x) {
    x = x % mod;
    if (x < 0)x += mod;

    return x;
}

ll power(ll x , int n) {
    ll p = 1;
    while (n--) {
        p = (p * x) % mod;
    }

    return p;
}

void solve() {

    int  n; cin >> n;
    if (n == 1) {
        cout << "0\n";
        return;
    }
    if (n == 2) {
        cout << "2\n";
        return;
    }

    // ll tot  = 1;

    // FOR(i, 0, n) {
    //     tot = (tot * 10) % mod;
    // }

    // ll both = 1;
    // FOR(i, 0, n) {
    //     both = (both * 8) % mod;

    // }

    // cout << moder(ans - tmp) << "\n";

    cout << (moder( power(10 , n) -  (2 * power(9 , n)) % mod ) + power(8, n)) % mod  << "\n";


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
    // cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


