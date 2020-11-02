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

bool power(int n,int count){
    int ans = 1;
    while(count--){
        ans*=2;
    }
    if(ans == n){
        return true;
    }else{
        return false;
    }
}

std::vector<int> sethia(int n){
    std::vector<int> v;
    ll temp = n;
    ll count = 0;
    while(temp>1){ // 2 1 0
        temp/=2;
        count++;
    }
    // count--;
    ll k = 0;
    if(power(n,count)){
        // cout << "-1 " << endl;
        v.pb(-1);
        return v;
    }else{
        if(n>=3){
            // cout << "2 3 1 ";
            v.pb(2); v.pb(3); v.pb(1);

            ll i;
            k = 4;
            for(i=4;i<=n;i++){
                if(k == i){
                    k = k*2;
                    // cout << (i+1) << " " << i << " ";
                    v.pb(i+1); v.pb(i);
                    i+=1;
                }else{
                    // cout << i << " ";
                    v.pb(i);
                }
            }

        }else if(n ==2){
                // cout << "-1 ";
                v.pb(-1);
        }
        else if(n == 1){
            // cout << "1" ;
            v.pb(1);
        }
    }
    // cout << endl;
    return v;
}


std::vector<int> solve(ll n){

    std::vector<int> v;
    
    if(n == 1){
        // cout << "1\n";
        v.pb(1);
        return v;
    }
    
    ll p = n;

    while(p > 1){
        if(p%2 == 0 ){
            p /= 2;
        } else{
            break;
        } 
    } 

    if(p == 1){
        // cout << "-1\n";
        v.pb(-1);
        return v;
    }

    
    v.pb(2); v.pb(3); v.pb(1);

    p = 4;
    ll num = 4;

    while(p <= n){
        
        v.pb(p+1);
        v.pb(p);
        
        FOR(i,p+2,min(n+1 , 2*p)){
            v.pb(i);

        }

        p *= 2;

    }

    return v;

    // trav(t , v)cout << t << " ";
    // cout << "\n";
        


    
    


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
    
    while(t <= N){
        std::vector<int> ans1 =  solve(t);
        std::vector<int> ans2 = sethia(t);
        if(sz(ans1) != sz(ans2)){
            cout << t << "\n";
            return 0;
        }
        FOR(i,0,sz(ans1)){
            if(ans1[i] != ans2[i]){
                cout << t << "\n";
                return 0;

            }

        }

        cout << t << "   OK\n" ; 
    }

    return 0;
}
      
       
