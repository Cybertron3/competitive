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

const int N = 1e3 , mod =  1000000007 , shift = 500;

//helper funcs
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down



void solve(){
    int inp;

    int n; cin >> n;
    std::vector<int> arr(n);
    F0R(i,n){
        cin >> arr[i];
        // arr[i]+= shift; 
    }

    sor(arr);

    std::vector<pii> freq;

    int ans[N];
    mem(ans , 0 );

    FOR(i,0,n){
        int cnt = 1;
        while(i+1 < n && arr[i+1] == arr[i] ){
            cnt++;
            i++;
        }

        freq.pb({arr[i] , cnt});

    }

    sort(all(freq));

    FOR(i,0,sz(freq)){
        int num = freq[i].ff;
        int cnt = freq[i].ss;

        // cout << cnt << " " << num << "\n";

        if(ans[num] == 0){
            ans[num] = num;
            cnt--;
        }
        int j =1;
        while(cnt > 0){
            if(num-j >= 1&& ans[num - j] == 0){
                cnt--;
                ans[num- j] = num;
            }
            if(cnt > 0 && ans[num + j] == 0){
                cnt--;
                ans[num + j] = num;
            }
            j++;
        }

    }

    ll sum = 0;

    // FOR(i,1,25){
    //     cout << i << " " << ans[i] << "\n";
    // }

    FOR(i,1,N){
        if(ans[i] != 0)sum += abs(ans[i] - i);

    }

    cout << sum << "\n";



    // FOR(i,1,201){
    //     if(freq[i] > 0 ){
    //         if(ans[i] == 0){
    //             ans[i] = i;
    //             freq[i]--;
    //         }

    //         int j = 1;
    //         while(freq[i] > 0){
    //             if(i-j >= 1 && arr[i-j] == 0){
    //                 arr[i-j] = i;
    //                 freq[i]--;
    //             }

    //             if(freq[i] > 0 && arr[i+j] == 0){
    //                 arr[i+j] = 
    //             }

    //         }
    //     }
    // }



    // cout << ans << "\n";

    
        


    
    


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
      
       
