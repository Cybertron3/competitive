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

    ll x1 , y1, z1 , x2 , y2 , z2;

    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    ll tmp ,ans = 0 ;

    tmp = min(z1  ,y2);
    ans += 2*tmp;

    z1 -= tmp;
    y2 -= tmp;

    tmp = min(z1 , z2);
    z1 -= tmp;
    z2 -=tmp;

    tmp = min(x1 , z2);
    x1 -= tmp;
    z2 -= tmp;

    tmp  = min(y1 , z2);
    ans -= 2*tmp;

    cout << ans << "\n";

    


    
    

    
    
        


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
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
