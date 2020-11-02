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

    int n , m; cin >> n >> m;
    int arr[n];
    forn(i,0,n){
        cin >> arr[i];
        
    }

    int b[m];

    

    forn(i,0,m){
        cin >> b[i];

    }

    int mini = b[0];
    forn(i,0,m){
        if(mini > b[i]){
            mini = b[i];
        }
    }

    ll ans = 0 , temp;

    forn(i,0,n){
        ans = (ans |  (arr[i] & mini) );
    }

    // forn(i,0,n){
    //     temp = (arr[i]&b[0]);
    //     forn(j,0,m){
    //         // cout << (arr[i] & b[j]) << "\n";
    //         if( (arr[i] & b[j]) < temp){
    //             temp = (arr[i] & b[j]);
    //         }

    //     }
    //     // cout << temp << "\n";
    //     // break;
    //     // cout << "sjdfuasufu" << "\n";
    //     ans = (ans | temp );
    //     // cout << ans <<"\n";
    // }    

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
    
    // cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
