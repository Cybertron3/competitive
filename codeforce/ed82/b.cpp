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

void solve(){

    /*
        NO CLUE.
    */

    ll n, g , b;

    cin >> n >> g >> b;

    ll days = 0;

    ll need = (n+1)/2;

    ll fctr = need / g;
    ll ext = need % g;

    days = n - need;

    if(need <= g){
        cout << n << "\n";
    }else if(g >= b){
        cout << n << "\n";
    }else {
        if(ext != 0){
            ll ans =  fctr*(g+b) + ext ;
            if(fctr*b )
        }
        else{
            ll ans =  fctr*(g+b) - b ;
            if(fctr*b - b < days)ans += (days - (fctr*b - b)); 
            cout << ans << "\n";
        }
    }



    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
