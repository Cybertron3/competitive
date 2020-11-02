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

double funny(ll x , ll h , ll c , ll t){

    double ans = (double)(x+1)*h + x*c;
    ans = (double)ans / (2*x + 1);
    ans = ans - t;

    return abs(ans);

}

void solve(){

    ll h , c , t;

    cin >> h >> c >> t;

    if(h <= t){
        cout << 1 << "\n";
    }else if( 2*t <= h +c ){
        cout << 2 << "\n";
    }else{
        ll x = (double)(h-t)/(t + t - h - c);
        ll ans = x;
        double diff = funny(x , h , c , t);

        // while(1){
        //     x++;
        //     if(diff > funny(x , h , c ,t)){
        //         ans = x;
        //         diff = funny(x , h , c, t);
                
        //     }else break;
        //     // x++;
        //     // diff = funny(x,h,c,t);
        // }

        // cout << 2*ans + 1<< "\n";

        for(ll i = max(x-3, (ll)1) ; i <= x+3 ; i++ ){
            if(diff > funny(i , h , c ,t)){
                ans = i;
                diff = funny(i , h , c, t);
            }
        }



        cout << ans + ans + 1 << "\n";

    }
    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
