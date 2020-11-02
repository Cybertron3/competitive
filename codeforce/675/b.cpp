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
    ll arr[n][m];
    forn(i,0,n){
        forn(j,0,m){
            cin >> arr[i][j];
        } 
    }

    ll a[4];

    ll ans = 0;

    forn(i,0,(n+1)/2){
        forn(j,0,(m+1)/2){
            a[0] = arr[i][j];
            a[1] = arr[i][m-1-j];
            a[2] = arr[n-1-i ][j];
            a[3] = arr[n-1-i][m-1-j];
            ll sum = 0 , val = 0;
            sort(a , a+ 4);
            val = a[1];
            // forn(k,0,4){
            //     val += a[k];
            //     // cout << a[k] << " ";
            // }
            // // cout << "\n";
            // val = val/4;
            // // cout << "val = " << val << "\n";
            // forn(k,0,4){
            //     sum += abs(val - a[k]);
            //     // cout << sum << "\n";
            // }

            // ll tsum = 0;
            // val++;


            forn(k,0,4){
                sum += abs(val - a[k]);
            }
            // cout << tsum << " " << sum << "fhushuhfhus\n";

            // ll ad = min(sum , tsum);
            ll ad = sum;

            int tmp1 = (n+1)/2 , tmp2 = (m+1)/2;
            tmp1--; tmp2--; 

            if( n%2 == 1 && tmp1 == i ){
                ad /= 2;

            }
            if(m%2 == 1 && tmp2 == j){
                ad /= 2;
            }

            ans += ad;
            // cout << ans << "\n";
        }

    }

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
      
       
