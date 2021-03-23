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

    int r , c , x;

    int arr[r][c];

    FOR(i,0,r){
    	FOR(j,0,c){
    		cin >> arr[i][j] ;
    	}
    }

    int inp;

    FOR(i,0,r){
    	FOR(j,0,c){
    		cin >> inp;
    		arr[i][j]  -= inp;
    	}
    }

    // int mini , tot = 0 ;

    // int prec[r+1];

   //  FOR(j,0,c){
   //  	map<int , int> mpp;
    	
   //  	memset(prec, 0 , sizeof(prec) );
   //  	FOR(i,0,x){
   //  		mpp[arr[i][j]]++;
   //  	}

   //  	mini = mpp.begin()->first;
   //  	prec[0] -= mini;
   //  	prec[x] += mini;

   //  	FOR(i,x,r){
   //  		mpp[arr[i][j]]++;
   //  		mpp[arr[i-x+1][j]]--;
   //  		mini = mpp.begin()->first;
			// prec[0] -= mini;
			// prec[x] += mini;

   //  	}

   //  	arr[0][j] += prec[0];
   //  	FOR(i,1,r){
   //  		prec[i] += prec[i-1];
   //  		arr[i][j] += prec[j];
   //  	}




   //  }
    

    for(int j = 0; j < c; j++ ){
    	map<int , int> mpp;
    	
	 	
	 	FOR(i,0,x){
	 		mpp[arr[i][j]]++;
	 	}

	 	int mini = mpp.begin()->first;
	 	FOR(k , 0 , x){
	 		arr[]
	 	}
	 	

	 	FOR(i,x,r){
	 		mpp[arr[i][j]]++;
	 		mpp[arr[i-x+1][j]]--;
	 		mini = mpp.begin()->first;
		
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
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


