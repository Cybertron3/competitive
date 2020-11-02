//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
using namespace std;
     
     
#define Fast_as_duck ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define rev(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    ll n , m ,t;
    cin >> n >> m >> t;

    ll fct4 = 1;

    for(int i = n ; i >= n - 3; i--){
        fct4 *= i;
    }

    fct4 = fct4 / 24;

    ll girls = m;

    ll r = t - 5;

    // (n + m - 5) C rem

    n = n + m - 5;

    ll val = 1;

    
    // int tr = n-r;

    // if(tr > r){
    //     r = tr;
    // }

    ll deno = 1;

    // forn(i,2,n-r + 1){
    //     deno *= i;
    // }

    // for(int i = n; i > r ; i--){
    //     val *= i;

    //     ll tmp = __gcd(val , deno);
    //     val /= tmp;
    //     deno /= tmp;
    // }

    // cout << val * girls * fct4 << "\n";


    // copied
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            val *= n; 
            deno *= r; 
  
            
            long long tmp = __gcd(val, deno); 
  
            deno /= tmp;
            val /= tmp; 
  
            n--; 
            r--; 
        } 
  
    } 
  
      cout << val * girls * fct4 << "\n";

    
    


}

int main(){
    Fast_as_duck;

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
      
       
