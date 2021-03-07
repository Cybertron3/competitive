
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

const int N = 1e6 + 5 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down

void solve(int primes[]){
	
	int x , y ; 
	cin >> x >> y;




	if(primes[x] <= y ){
		cout << "Chef\n";
	}else{
		cout << "Divyam\n";
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

    int primes[N];
	// memset(primes , 1 , sizeof(primes));
	for(int i = 2 ; i  < N ; i++){
		primes[i] = 1;
	}

	int j;

	for(int i = 2; i < N ; i++){
		if(primes[i] == 0)continue;

		j = 2;
		while(i*j < N ){
			primes[i*j] = 0;
			j++;
		}
	}

	primes[1] = 0;
	for(int i = 2 ; i < N; i++){
		primes[i] += primes[i-1];
	}



    int t = 1;
    cin >> t;
    while (t--) {
        solve(primes);
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}




