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


vector<string> fun(vector<string> devicenames ){
    int n = (int) devicenames.size();
    map<string , int> names;
    std::vector<string> ans;
    for(int i =0 ; i< n; i++){
        if(names.find(devicenames[i]) == names.end()){
            names.insert({devicenames[i] , 1});
            ans.push_back(devicenames[i]);
        }else{

            auto itr = names.find(devicenames[i]);
            int num = itr->second;
            if(num < 10){
                ans.push_back(devicenames[i] + (char)(itr->second + '0'));
            }else{
                string newstr = "";
                while(num > 0){
                    newstr  = newstr + (char)(num % 10 + '0');
                    num /= 10;
                }

                reverse(newstr.begin() , newstr.end());
                ans.push_back(devicenames[i] + newstr);

            }


            itr->second += 1;
        }
    }

    return ans;
}



void solve() {

    int n ; cin >> n;
    std::vector<string> arr(n);
    
    for(auto &a : arr){
        cin >> a;
    }

    std::vector<string> v = fun(arr);

    FOR(i,0,sz(v)){
        cout << v[i] << "\n";
    }
    



}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    /*
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #endif
    */

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


