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

    ll x1 , x2, y1 , y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    ll  tot = x2 - x1  + y2 - y1 - 1;

    ll maxi = min(x2 - x1  , y2 - y1);

    ll sum = maxi*(maxi-1);

    ll used = (maxi-1)*2;

    sum += maxi*(tot - used);

    cout << sum + 1 << "\n";

    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
