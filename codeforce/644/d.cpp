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

    ll n , k;
    cin >> n >> k;

    ll i = 1 , ans = -1;

    while(i*i <= n && i <= k){
        if(n%i == 0){
            if(ans == -1 ){
                ans = n/i;
            }
            else if(n/i < ans && i <= k){
                ans = n/i;
            }

            if(ans != -1 && i < ans && n/i <= k){
                ans = i;
            }


        }

        i++;
    }

    // ll i = min(k , (ll)sqrt(n));

    // ll ans = -1;
    // while(i >= 1){
    //     if(n%i == 0){
    //         ans = n/i;
    //     }
    //     i--;
    // }
    

    cout << ans << "\n";
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
