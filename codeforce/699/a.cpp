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

    int x , y ; cin >> x >> y;
    string str; cin >> str;

    int n = sz(str);

    int ix = 0 , iy = 0;
    
    int arr[4];
    memset(arr , 0 , sizeof(arr));

    FOR(i,0,n){
    	if(str[i] == 'U')arr[2]++;
    	if(str[i] == 'D')arr[3]++;
    	if(str[i] == 'R')arr[0]++;
    	if(str[i] == 'L')arr[1]++;

    }
    bool flag = true;
    if(x < 0 ){
    	if(abs(x) > arr[1]){
    		flag = false;
    	}
    }else{
    	if(x > arr[0]){
    		flag = false;
    	}
    }

    if(flag){
    	if(y < 0 ){
	    	if(abs(y) > arr[3]){
	    		flag = false;
	    	}
	    }else{
	    	if(y > arr[2]){
	    		flag = false;
	    	}
	    }

    }

    if(flag){
    	cout << "YES\n";
    }else{
    	cout << "NO\n";
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
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


