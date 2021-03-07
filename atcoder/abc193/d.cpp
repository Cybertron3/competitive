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

ll pow10(int x){
	ll p = 1;
	while(x--) p*= 10;
	return p;
}


void solve() {

    int k;
    string s , t;

    cin >> k >> s >> t;

    vector<int> freq_s(10 , 0) , freq_t(10 , 0) , freq(10 , k);

    ll score_s = 0 , score_t = 0;

    for(int i = 0; i < 4; i++){
    	freq_s[s[i] - '0']++;
    	freq_t[t[i] - '0']++;
    	freq[s[i]-'0']--;
    	freq[t[i]-'0']--;

    }

    // for(int i = 1; i < 10 ; i++){
    // 	printf("%d , % d , % d\n", freq_s[i] , freq_t[i] , freq[i] );
    // }

    // for(int i = 1; i < 10; i++){
    // 	score_s += i * pow10(freq_s[i]);
    // 	score_t += i*pow10(freq_s[i]);
    // }

    ll numerator = 0;

    for(int i = 1; i < 10; i++){
    	if(freq[i] > 0 ){
			freq_s[i]++;
			freq[i]--;
		}else continue;

		score_s = 0;
		for(int itr = 1; itr < 10; itr++){
	    	score_s += itr * pow10(freq_s[itr]);
	    	
	    }

    	for(int j = 1; j < 10; j++){

    		

    		// if(freq[i] > 0 ){
    		// 	freq_s[i]++;
    		// 	freq[i]--;
    		// }else continue;

    		if(freq[j] > 0 ){
    			freq[j]--;
    			freq_t[j]++;
    		}
    		else {
    			// freq[i]++;
    			// freq_s[i]--;
    			continue;
    		}

    		score_t = 0 ;

    		for(int itr = 1; itr < 10; itr++){
		    	// score_s += itr * pow10(freq_s[itr]);
		    	score_t += itr *pow10(freq_t[itr]);
		    }

		    if(score_s > score_t){
		    	
		    	freq[j]++;
		    	numerator += (freq[i] + 1 )*( freq[j] );
		    	// printf("%ld\n", numerator );
		    	printf("%d , %d\n" , i , j);
		    	freq[j]--;

		    }

		    

		    // cout << "& ";
    		
    		
    		freq_t[j]--;
    		freq[j]++;


    	}
    	freq[i]++;
    	freq_s[i]--;
    }

    ll denominator =(ll) (9*k - 8) * (9*k - 9);

    
    long double ans = (long double)numerator / denominator ;
    // long double ans = (long double)4/5;
    printf("%Ld  , %Ld \n", numerator , denominator  );
    printf("%0.8Lf\n", ans );


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
    // cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


