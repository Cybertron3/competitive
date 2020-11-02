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
    std::vector<string> arr(n);
    F0R(i,n){
        cin >> arr[i]; 
    }

    int ans = 0;
    std::vector<pii> v;

    if(arr[0][1] == arr[1][0]){
        
        if(arr[0][1] == arr[n-1][n-2]){
            ans++;
            v.pb({n , n-1});

        }
        if(arr[0][1] == arr[n-2][n-1]){
            ans++;
            v.pb({n-1 , n});
        }
        // char ch = arr[0][1];
        // int num = ch - '0';
        // num = (num + 1)%2;
        // arr[n-1][n-2] = (char) (num + '0' );
        // arr[n-2][n-1] = (char) (num + '0' );

    }else{
        if(arr[n-1][n-2] == arr[n-2][n-1]){

            if(arr[0][1] == arr[n-1][n-2]){
                ans++;
                v.pb({1 , 2});

            }
            if(arr[1][0] == arr[n-2][n-1]){
                ans++;
                v.pb({2 , 1});
            }
            // char ch = arr[n-1][n-2];
            // int num = ch - '0';
            // num = (num + 1)%2;
            // arr[0][1] = (char) (num + '0' );
            // arr[1][0] = (char) (num + '0' );

        }else{
            // arr[n-1][n-2] = '0';
            // arr[n-2][n-1] = '0';
            // arr[0][1] = ('1' );
            // arr[1][0] = ( '1' );

            if(arr[0][1] == '1'){
                ans++;
                v.pb({1 , 2});

            }
            if(arr[1][0] == '1'){
                ans++;
                v.pb({2 , 1});
            }

            if('0' == arr[n-1][n-2]){
                ans++;
                v.pb({n , n-1});

            }

            if('0' == arr[n-2][n-1]){
                ans++;
                v.pb({n-1 , n});
            }


        }
    }

    cout << ans << "\n";

    FOR(i,0,sz(v)){
        cout << v[i].ff << " " << v[i].ss << "\n";
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
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}
      
       
