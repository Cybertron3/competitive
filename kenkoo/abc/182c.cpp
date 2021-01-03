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

int fun(string str , int i , int sum , int ans) {
    if (sum != 0 && sum % 3 == 0)return ans;
    if (i == sz(str))return 50;

    return  min(fun(str , i + 1 , sum , ans) , fun(str , i + 1 , sum - (str[i] - '0') , ans + 1)  );

}

void solve() {

    string str; cin >> str;
    int n = sz(str);

    int sum = 0;
    FOR(i, 0, n) {
        sum += (str[i] - '0');

    }

    // cout << sum << "\n";

    int ans =  fun(str , 0 , sum , 0) ;
    if (ans == 50)ans = -1;
    cout << ans << "\n";
    // cout << min (fun(str , 1 , sum - (str[0] - '0')) , fun(str , 1, sum (str[0] - '0')) );








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


