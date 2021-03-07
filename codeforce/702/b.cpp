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

    int n ; cin >> n;
    std::vector<int> arr(n);
    
    for(auto &a : arr){
        cin >> a;
    }

    int c[3] = {0}; 

    FOR(i,0,n){
    	if(arr[i] % 3 == 0)c[0]++;
    	else if(arr[i] % 3 == 1)c[1]++;
    	else c[2]++;
    }

    // int ans = 0;
    // n = n / 3;
   	// int cnt = 0 , ext = 0;

   	// int i = 0;
   	// bool flag[3] ;
   	// memset(flag , false , sizeof(flag));

   	// while(cnt < 3){
   		
   	// 	if(flag[i] == true ){
   	// 		i = (i+1)%3;
   	// 		continue;
   	// 	}
   	// 	if(c[i] == n){
   	// 		flag[i] = true;
   	// 		cnt++;
   	// 	}
   	// 	else if(c[i] > n){
   	// 		flag[i] = true;
   	// 		cnt++ = 
   	// 	}
   	// }
    
    n = n / 3;
    c[0] -=n ;
    c[1] -= n;
    c[2] -= n;

    int ans = 0 , ext = 0;

    if(c[0] < 0){
    	if(c[2] > 0){
    		int tmp = min(abs(c[0] ) , c[2] );
    		ans += tmp;
    		c[0] += tmp;
    		c[2] -= tmp;
    	}
    	if(c[0] < 0 && c[1] > 0){
    		int tmp = min(abs(c[0] ) , c[1] );
    		ans += (2*tmp);
    		c[0] += tmp;
    		c[1] -= tmp;
    	}

    	if(c[1] < 0){
    		int tmp = min(abs(c[1] ) , c[2] );
    		ans += (2*tmp );
    		c[0] += tmp;
    		c[2] -= tmp;
    	}
    	if(c[2] < 0){
    		int tmp = min(abs(c[2] ) , c[1] );
    		ans += tmp;
    		c[0] -= tmp;
    		c[2] += tmp;
    	}
    }else{
    	if(c[1] < 0 && c[0] > 0){
    		int tmp = min(abs(c[1] ) , c[0] );
    		ans += tmp;
    		c[1] += tmp;
    		c[0] -= tmp;

    	}

    	if(c[1] < 0 && c[2] > 0){
    		int tmp = min(abs(c[1] ) , c[2] );
    		ans += (2*tmp);
    		c[1] += tmp;
    		c[2] -= tmp;
    	}

    	if(c[2] < 0 && c[1] > 0){
    		int tmp = min(abs(c[2] ) , c[1] );
    		ans += tmp;
    		c[2] += tmp;
    		c[1] -= tmp;
    	}

    	if(c[2] < 0 ){
    		int tmp = min(abs(c[2] ) , c[0] );
    		ans += (2*tmp);
    		c[2] += tmp;
    		c[0] -= tmp;
    	}

    	

    }

    cout << ans << "\n";


    // FOR(i,1,3){
    // 	c[i] += c[i-1];
    // 	ans += abs(c[i]);
    // }

    // cout << ans << "\n";


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


