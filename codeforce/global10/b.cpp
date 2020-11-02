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

    ll n,k; cin >> n >> k;
    std::vector<ll> arr(n);

    bool flag = false;

    forn(i,0,n){
        cin >> arr[i];
        if(arr >= 0)
        
    }
    
    if(k%2){
        // cout << "NO problem";
        int maxi = 0;
        forn(i,0,n){
            if(arr[maxi] < arr[i])maxi = i;
        }

        forn(i,0,n){
            cout << arr[maxi] - arr[i] << " ";
        }

    }else {
        int maxi = 0;
        forn(i,0,n){
            if(arr[maxi] < arr[i])maxi = i;
        }

        forn(i,0,n){
            arr[i] = arr[maxi] - arr[i] ;
        }

        maxi = 0;
        forn(i,0,n){
            if(arr[maxi] < arr[i])maxi = i;
        }

        forn(i,0,n){
            cout << arr[maxi] - arr[i] << " ";
        }
    }
    cout << "\n";

    
    

    
    
        


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
      
       
