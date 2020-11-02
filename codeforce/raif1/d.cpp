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

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down


void solve(){
    int inp;

    int n; cin >> n;
    std::vector<int> arr(n);
    F0R(i,n){
        cin >> arr[i]; 
    }

    std::vector<int> col[n];
    std::vector<pii> ans;

    int row = n , last = n;
    int streak = 0;
    ROF(i,0,n){
        if(arr[i] == 1){
            row--;
            if(row < 0){
                cout << "-1\n";
                return;
            }

            ans.pb({row , i});
            last = i;

            streak = 0;

        }else if(arr[i] == 2){
            if(last < n){
                ans.pb({row , i});
                // ans.pb({row , last});
                last = i;
            }else{
                cout << "-1\n";
                return;
            }

            streak++;

            if(streak > 2){
                cout << "-1\n";
                return;
            }

        }else if(arr[i] == 3){
            row--;
            if(row >= 0 && last < n ){
                ans.pb({row , i});
                ans.pb({row , last});
                last = i;
            }else{
                cout << "-1\n";
                return;
            }

            streak = 0;

        }

    }

    cout << sz(ans) << "\n";

    FOR(i,0,sz(ans)){
        cout << ans[i].ff + 1<< " " << ans[i].ss + 1 << "\n";
    }

    
        


    
    


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
      
       
