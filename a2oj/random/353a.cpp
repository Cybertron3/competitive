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
    std::vector<int> up(n) , down(n);
    F0R(i,n){
        cin >> up[i] >> down[i]; 
    }

    ll sum1 = 0 , sum2 = 0;

    FOR(i,0,n){
        sum1+=up[i];
        sum2+=down[i];
    }

    if(sum1 %2 == sum2 % 2){
        if(sum1 % 2 == 0){
            cout << "0\n";
            return;
        }
        bool flag = false;
        FOR(i,0,n){
            if(up[i] % 2 != down[i] % 2){
                flag =true;
                break;
            }
        }

        if(flag){
            cout << "1\n";
        }else{
            cout << "-1\n";
        }
    }else {
        cout << "-1\n";
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
      
       
