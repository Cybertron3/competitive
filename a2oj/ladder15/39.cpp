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

bool rep(string str, int rep_sz){
	int n = str.size();

	for(int i = 0; i < n ; i++){
		if(str[i] != str[i % rep_sz]){
			return false;
		}
	}

	return true;
}

int smallest_divisor( string str ){
	int i = 1 , n = str.size();
	int min_sz = n;
	while(i*i <= n){
		if( n % i != 0){
			i++;
			continue;
		}

		if(rep(str , i)){
			min_sz = min(min_sz , i);
			break;
		}
		else if(rep(str , n/i)){
			min_sz = min(min_sz , n/i);
		}

		i++;

	}

	return min_sz;
}

void solve() {

    string str1 , str2;

    cin >> str1 >> str2 ;

    int rep1 = smallest_divisor(str1);
    int rep2 = smallest_divisor(str2);

    // cout << rep1 << " " << rep2 << "\n";

    if(rep1 != rep2){
    	cout << "0\n";
    	return ;
    }

    bool flag = true;

    int limit = min(str1.size() , str2.size());

    for(int i = 0; i < limit ; i++){
    	if(str1[i] != str2[i]){
    		cout << "0\n";
    		return ;
    	}
    }

    int cnt = 0;

    for(int i = rep1 ; i <= limit; i += rep1){
    	if(str1.size() % i == 0 && str2.size() % i == 0){
    		cnt++;
    	}
    }

    cout << cnt << "\n";



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


