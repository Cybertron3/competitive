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

    ll x , y; cin >> x >> y;

    ll sum = x + y;

    ll n = sqrt(sum);

    if(n * n != sum){
    	cout << "NO\n";
    	return;
    }

    ll od ;

    od = n-1;

    while(od > 0 && 2*od*(n-od) != y ){
    	od--;
    }

    if(od == 0){
    	cout << "NO\n";
    	return ;
    }

    ll ev = n - od;

    cout << "YES\n";
    cout << n << "\n";

    cout << "1 2\n";

    int node= 3;
    FOR(i,0,od-1){
    	cout << "1 " << node << "\n";
    	node++;
    }

    FOR(i,0,ev-1){
    	cout << "2 " << node << "\n";
    	node++;
    }

   /* if(n == 2){
    	if(x == y && x == 2){
    		cout << "YES\n";
    		cout << "2\n1 2\n";
    	}else{
    		cout << "NO\n";
    	}

    	return;
    }
    
    x -= n;

    if(x < 0 || x % 2 != 0 || y % 2 != 0){
    	cout << "NO\n";
    	return;
    }

    x /= 2;
    y /= 2;

    int ev1 , ev2 , od1 , od2;

    std::vector<pii> v;

    v.pb({1 , 2});
    y--;

    ev1 = 1 , od1 = 1;
    ev2 = 1 , od2 = 1;
    
    for(int i = 3; i <= n ; i++){
    	if(y >= x){
    		v.pb({2 , i});
    		x -= ev2;
    		y -= od2;

    		ev2++;

    		od1++;

    	}else{
    		v.pb({1 , i});
    		x -= ev1;
    		y -= od1;

    		ev1++;
    		od2++;

    	}
    }

    if(x == 0 && y == 0){
    	cout << "YES\n";

    	cout << n << "\n";

    	for(int i = 0; i < n-1; i++){
    		cout << v[i].ff << " " << v[i].ss << "\n";
    	}


    }else{
    	cout << "NO\n";
    }
*/





    // int ev  , od , l; 

    // FOR(i , 1 ,  n+1){
    // 	l = n - i;
    // 	ev = l / 2;
    // 	od = (l+1)/2;

    // 	x -= ev;
    // 	y -= od;

    // 	l= i - 1;

    // 	ev = l / 2;
    // 	od = (l+1)/2;

    // 	x -= ev;
    // 	y -= od;

    // 	if(x < 0 || y < 0){
    // 		cout << "NO\n";
    // 		return;
    // 	}

    // }

    // FOR(i,0,n){
    // 	cout << i+1 << " ";

    // }

    // cout << "\n";



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


