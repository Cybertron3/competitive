//PLUS ULTRA
// AC
#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    int n , p; cin >> n >> p;

    string  str ; cin >> str;

    p--;

    ll ans = 0;
    int val;
    if(p >= n/2){
        p = n -1 - p;
    }

        // ans += min(p , n/2 - 1 - p);
        // bool l = false, r = false;
    int l = 0 , r= 0 , cnt = 1;
    forn(i,p+1, n/2){
        
        if(str[i] != str[n-1-i]){
            val = abs(str[i] - str[n-1-i]);

            ans+= min(val , 26 - val);
            r = cnt;
            // r = true;
            // break;
        }
        cnt++;
    }

    cnt = 1;
    nfor(i,p-1,0){
        if(str[i] != str[n-1-i]){
            val = abs(str[i] - str[n-1-i]);
            ans+= min(val  , 26-val);
            l = cnt;
        }

        cnt++;

    }

    val = abs( str[p] - str[n-1-p] );
    ans+=min(val , 26-val);

    // cout << ans << "\n";

    ans+= l + r + min(l , r);
    

    cout << ans << "\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
