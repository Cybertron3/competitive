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

char chng(char ch){
	if(ch == '0')return '1';

	return '0';
}

void solve() {

    string str; cin >> str;
    int n = str.size();

    // char ch  = '?';
    // int dp[n+1][2];
    // memset(dp , 0 , sizeof(dp));

    // set<int> s1 , s2;

    // ll ans = 0;

    // for(int i = 1; i <= n; i++){


    //     if(str[i-1] == '?'){
    //         dp[i][0] = dp[i-1][1] + 1;
    //         dp[i][1] = dp[i-1][0] + 1;

    //         ans += dp[i][0] + dp[i][1];

    //     }else if(str[i-1] == ch){
    //         if(str[i] == '0'){
    //             dp[i][0] = 1;
    //         }else {
    //             dp[i][1] = 1;

    //         } 

    //         ans += dp[i][0] + dp[i][1];

    //     }else{

    //         if(str[i-1] == '0' ){
    //             dp[i][0] = dp[i-1][1] + 1; 
    //         }else{
    //             dp[i][1] = dp[i-1][0] + 1;

    //         }

    //         ans += dp[i][0] + dp[i][1];

    //         ch = str[i-1];

    //     }

    //     s1.insert(dp[i][0]);
    //     s2.insert(dp[i][1]);

    //     // if(str[i-1] == '0')dp[i][1]++;
    //     // else if(str[i-1] == '1')dp[i][0]++;
    //     // else {
    //     //     dp[i][1]++;
    //     //     dp[i][0]++;
    //     // }

    // }

    // cout << s1.size() + s2.size() << "\n";







    ll ans = n;
    int j  = 0;

    while(j < n && str[j] == '?'){
    	j++;
    }

    if(j == n){
    	ans = (ll)(j * (j+1))/2;
    	cout << ans << '\n';
    	return;
    }

	char ch= str[j];
    ll len = j + 1;


    
    for(int i = j+ 1 ; i < n; i++ ){
        if(str[i] == '?'){
            len++;
            while(i+1 < n && str[i+1] == '?' ){
                len++;
                i++;
            }

            if(i +1 != n){
                ch = chng(str[i+1]);
            }

            continue;
        }
    	if(str[i] != ch ){
    		ch = chng(ch);
    		len++;
    	}else{
    		if(str[i-1] == '?'){
    			// cout << i << " ";
    			ch = str[i];
    			ans += (len * (len-1))/2 ;
    			len = 1;
    			j = i-1;
    			while(j >= 0 && str[j] == '?'){
    				j--;
    				len++;
    			}
    			
    		}else{
    			ans += (len * (len-1))/2;
    			len = 1;
    		}
    	}
    }

    ans += (len * (len-1))/2 ;

    cout << ans << '\n';


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


