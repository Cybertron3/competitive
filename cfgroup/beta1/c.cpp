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

    int n , m;
    cin >> n >> m;

    std::vector<pair<int , ll>> arr;

    int a , b;
    forn(i,0,m){
        cin >> a >> b;
        arr.pb({b, a});
    }

    sort(arr.begin(), arr.end());

    int idx = arr.size();
    idx--;

    ll ans = 0;
    while(n> 0 && idx>= 0){
        if(arr[idx].ss >= n ){
            ans += n*arr[idx].ff;
            n = 0;
            break;

        }else{
            ans += (ll)(arr[idx].ff * arr[idx].ss);
            n = n - arr[idx].ss;
            idx--;
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
    
    // cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
