//PLUS ULTRA
//one who atops 

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

    ll r , c , x , y;

    cin >> r >> c >> x >> y;

    ll ans = 0;
    ans += max(x , r - 1-x);
    ans = max(ans , max(y , c - 1 - y) );

    cout << ans << endl;
    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
