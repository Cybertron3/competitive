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

    int n; cin >> n;
    std::vector<ll> arr(n);
    forn(i,0,n){
        cin >> arr[i];
        
    }

    ll ans = 0 , sum = 0;
    forn(i,0,n){
        if(arr[i] > 0){
            sum += arr[i];
        }else{
            if(abs(arr[i]) > sum ){
                arr[i] = arr[i] + sum;
                sum = 0;
            }else{
                // arr[i] = 0;
                sum = sum + arr[i];
                arr[i] = 0;
            }
            ans = ans -  arr[i];
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
      
       
