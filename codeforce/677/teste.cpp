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


ll solve(int n , std::vector<int> arr){
    int inp;

    // ll n ;

    // cin >> n;

    int idx = 0;
    FOR(i,0,n){
        if(arr[idx] < arr[i] ){
            idx = i;
        }
    }

    // bool left = true , right= true;

    // if(idx-1 >= 0 && arr[idx] == arr[idx-1]){
    //     left = false;
    // }
    // if(idx+1 >= 0 && arr[idx] == arr[idx+1]){
    //     right = false;
    // }

    bool flag = false;

    FOR(i,0,n){
        if(arr[i] == arr[idx]){
            if(i-1 >= 0 && arr[i] > arr[i-1]){
                flag = true;
                idx = i;
                break;
            }
            if(i+1 < n && arr[i] > arr[i+1]){
                flag = true;
                idx = i;
                break;
            }

        }
    }

    // if(flag)cout << idx + 1 << "\n";
    // else cout << "-1\n";
        
    if(flag)return idx+1;
    else return -1;

    
        


    
    


}


ll other(ll n , std::vector<int> a ){
               // ll n;

    // set<ll> st;
    // for(ll i = 0;i < n;i++){
        
    //    // st.insert(a[i]);
    // }
    // if((int)st.size() == 1){
    //    // cout<<"-1\n";
    //     return -1;
    // }
    if(false){
        int x = 1;
    }
    else{
       ll maxind = 0, maxele = a[0];
       for(ll i = 1;i < n;i++){
            if(a[i] > maxele){
                 maxind = i;
                 maxele = a[i];
            }
       }
       bool flg = false;
       for(ll i = 0;i < n;i++){
            if(i == 0){
                 if(a[i] == maxele && a[i+1]!= maxele){
                      maxind = i;
                      break; 
                 }
            }
            else if(i == n-1){
                 if(a[i] == maxele && a[i-1]!= maxele){
                      maxind = i;
                      break; 
                 }
            }
            else if((a[i] == maxele) && !(a[i-1]==maxele && a[i+1]==maxele)){
                 maxind = i;
                 flg = true;
                 break;
            }
       }
       // if(flg)
       // cout<<maxind+1<<'\n';
       return maxind+1;
    }
}

int rndm(){
    int x= rand();
    x = x % 1000;
    x *= x;
    // x = x - 179;
    x %= 10000;
    x *= x;
    return x  % 10;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/

    // int t = 10;     
    // cin >> t;

    srand(time(0));
    
    while(1){


        int n = rndm()  ;
        std::vector<int> arr(n);
        FOR(i,0,n){
            arr[i] = rndm();
        }

        

        ll x = other( n , arr);

        // if(solve(n , arr) != other(n , arr)){
        //     cout << n << "\n";
        //     FOR(i,0,n){
        //         cout << arr[i] << " ";
        //     }
        //     cout << "\n";
        // }else{
        //     cout << "ok\n";
        // }
        
        cout << "HERE\n";
    }

    cout << "DONE\n";

    return 0;
}
      
       
