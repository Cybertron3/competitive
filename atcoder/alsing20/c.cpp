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

    int num; cin >> num;
    
    forn(n,1,num+1){

        int ans = 0;

        forn(x,1,sqrt(n)){
            forn(y,1,sqrt(n)){

                ll c = (ll)n - x*x - y*y - x*y;
                ll b = (x+y);
                ll d = b*b + 4*c;
                ll rootd = sqrt(d);
                if(rootd * rootd != d){
                    continue;
                }
                if(rootd > b && (rootd-b)%2 == 0)ans++;
                // forn(z,1,n){
                //     if(x*x + y*y + z*z + x*y + y*z + z*x == n ){
                //         ans++;
                //     }
                //     if(x*x + y*y + z*z + x*y + y*z + z*x > n ){
                //         break;
                //     }

                // }
            }
        }

    
        cout << ans << "\n";
        
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
      
       
