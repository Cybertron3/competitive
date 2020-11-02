//PLUS ULTRA


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

ll fun(ll x){
    if(x == 1)return 1;
    if (x == 2 )return 3;

    ll ans = 3;
    ll i = 2;
    while( i*2 <= x){
        i *= 2;
        ans = 2*ans + 1;
    }

    
    if(i == x){
        return ans;
    }else{
        return ans + fun(x - i );
    }
}

void solve(){

    ll n; cin >> n;

    cout << fun(n) << "\n";

    

    
    
        


}

int main(){
    SPEED;

/*
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
