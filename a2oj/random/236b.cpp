#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll,ll>;
     

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


const int N = 1e6 + 10 , mod =  1073741824;

//helper funcs
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down

ll power(ll cnt){
    ll p = 1;
    while(cnt--){
        p = (p * 2) % mod;
    }
    return p;
}

ll fun(int x){
    int i = 2 , cnt = 0;
    ll ans = 1;
    while(x >= i){
        cnt = 0;
        
        while(x % i == 0){
            x /= i;
            cnt++;
        }

        ans = (ans * (cnt+1) ) % mod; 
        i++;
    }

    return ans;

}

void solve(){

    int a , b , c;
    cin >> a >> b >> c;
    // std::vector<int> arr(n);
    // F0R(i,n){
    //     cin >> arr[i]; 
    // }

    ll sum = 0;

    FOR(i,1,a+1){
        FOR(j,1,b+1){
            FOR(k,1,c+1){
                sum = (sum + fun(i*j*k) ) % mod;

                // cout << num << "   ";
            }
        }
    }

    cout << sum << "\n";

    
        


    
    


}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/

    int t = 1;     
    // cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}
      
       
