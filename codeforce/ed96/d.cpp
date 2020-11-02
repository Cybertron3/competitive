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


const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down


void solve(){

    int n; cin >> n;
    string str; cin >> str;

    std::vector<int> arr;

    int cnt = 1;
    FOR(i,1,n){
        if(str[i] != str[i-1] ){
            arr.pb(cnt);
            cnt = 0;
        }
        cnt++;
    }

    arr.pb(cnt);

    // FOR(i,0,sz(arr))cout << arr[i] << " ";
    // cout << "\n";


    int itr = 0;
    int ans = 0;

    FOR(i,0,sz(arr)){
        if(itr >= i && itr < sz(arr) && arr[itr] > 1){
            arr[itr]--;
        }else{

            if(itr < i)itr = i;

            while(itr < sz(arr)){
                if(arr[itr] > 1)break;
                itr++;
            }
            if(itr == sz(arr)){
                // ans += cdiv((arr.size() - i ) , 2 );
                // break;
                i++;

            }else{
                arr[itr]--;
            }
        }

        ans++;

    }

    // cout << "ans = ";
    cout << ans << "\n";
        


    
    


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
      
       
