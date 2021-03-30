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


void SolveForPositive(int x , int y , int n , string str){
	

    
    for(int i = 1 ; i  < n ; i++){
    	if(str[i] == '?'){
    		if(str[i-1] == 'C'){
    			str[i] = 'C';
    			
    		}else if(str[i-1] == 'J'){
    			str[i] = 'J';
    		}

    	}
    }

    int i = 0;
    
	while(i < n && str[i] == '?' ){
		i++;
	}

	ll ans = 0;

    if(i != n){
	
		while(i+1 < n){
			if(str[i] == 'C' && str[i+1] == 'J'){
				ans += x;
			}else if(str[i] == 'J' && str[i+1] == 'C') {
				ans += y;
			}

			i++;
		}
	}

    cout << ans << "\n";

}

void SolveForNegative(int x , int y , int n , string str){

	for(int i = 1 ; i  < n ; i++){

		if(i == n-1 && str[i] == '?' ){
			if(str[n-2] == 'C'){
			
				if(x < 0)str[i] = 'J';
				else str[i] = 'C';

			}else if(str[i-1] == 'J' ){
				
				if(y < 0)str[i] = 'C';
				else str[i] = 'J';
			
			}
		}

    	if(str[i] == '?'){
    		if(str[i-1] == 'C'){
    			str[i] = 'J';
    			
    		}else if(str[i-1] == 'J'){
    			str[i] = 'C';
    		}

    	}
    }

    int i = 0;
    
	while(i < n && str[i] == '?' ){
		i++;
	}

	ll ans = 0;

	while(i > 0){
		if(i == n){
			ans = (n/2) * (x + y) + (n % 2)* min(x , y);
			goto printStatement ;
		}else{

			while(i > 0){

				if(i == 1){
					if(str[i] == 'C'){
						if(y < 0)str[0] = 'J';
						else str[0] = 'C';
					}else{
						if(x < 0)str[0] = 'C';
						else str[0] = 'J'; 
					}
				}

				if(str[i] == 'C'){
					str[i-1] = 'J';
				}else{
					str[i-1] = 'C';
				}
				i--;
			}
			
		}
	}

	

    if(i != n){
	
		while(i+1 < n){
			if(str[i] == 'C' && str[i+1] == 'J'){
				ans += x;
			}else if(str[i] == 'J' && str[i+1] == 'C') {
				ans += y;
			}

			i++;
		}
	}

	printStatement :

    cout << ans << "\n";


}

void solve() {

    int x , y ;
    string str;
    cin >> x >> y >> str;

    int n = (int)str.size();

    if(x + y >= 0){
    	SolveForPositive(x , y , n , str);
    }

    else {
    	SolveForNegative(x , y , n , str);
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

    int  t = 1 , T; cin >> T;
    while(t <= T) {
    	cout << "Case #" << t << ": ";
    	solve();
    	t++;
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


