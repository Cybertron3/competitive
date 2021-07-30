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

	int W , H;
	cin >> W >> H;

    int x1 , x2 , y1 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int w , h ; cin >> w >> h;


    if( max(x1 , W-x2) >= w || max(y1 , H-y2) >= h  ){
    	cout << "0.0000000\n";
    }else if(abs(y2 - y1) + h <= H || abs(x2-x1)+w <= W   ){
    	double x = 0.0 , y = 00.0;
    	bool flag = false;
    	if(abs(y2 - y1) + h <= H ){
    		y = min(abs(h-y1)  , abs(y2- (H-h) )  );
    		flag = true;
    	}

    	if(abs(x2-x1)+w <= W  ){
    		x = min(abs(w-x1) , abs(x2 - (W-w)));
    		if(flag)
    			printf("%0.7f\n" , min(x , y));
    		else printf("%0.7f\n" ,x );
		}
    	else{
    		printf("%0.6f\n" ,  y);
    	}

    }else{
    	cout << "-1\n";
    }


}

int main() {
    // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);




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


