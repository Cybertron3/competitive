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

    ll x , k  , d;
    cin >> x >> k >> d;

    if(x < 0)x = x * (-1);

    // if(x == 0)cout << "0\n";

    ll steps = x / d;

    if(steps == k){
        cout << x - (steps*d) << "\n";

    }else if(steps< k){
        x = x - steps*d;
        k = k - steps;

        if(k %2 == 0){
            cout << x << "\n";
        }
        else{
            cout << abs(x - d) << "\n";
        }
        // cout << min( (x - (steps*d)) , abs(x - ((steps +1)*d )) ) << "\n";

    }else{
        cout << x - k *d << "\n"; 
    }


    
    

    
    
        


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
      
       
