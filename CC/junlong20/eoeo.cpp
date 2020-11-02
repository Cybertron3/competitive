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

    ll tom ; cin >>  tom;
    
    ll cnt2 = 0 , ts = tom;

    while(tom % 2 == 0){
        tom /= 2;
        cnt2++;
    }

    ll jerry = 2;

    forn(i,0,cnt2){
        jerry *= 2;
    }



    ll ans = ts / jerry;
    
        
    cout << ans << "\n";


}

int main(){
    SPEED;


    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
