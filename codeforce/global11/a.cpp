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
    int arr[n];
    ll e = 0 , odd = 0;
    forn(i,0,n){
        cin >> arr[i]; 
        if(arr[i] < 0)e += arr[i];
        else odd += arr[i];
    }

    if(e + odd == 0)cout << "NO\n";
    else{
        cout << "YES\n";
        sort(arr , arr+n);
        if(abs(e) > odd){
            forn(i,0,n){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }else{
            for(int i = n-1; i >= 0; i--){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
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
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}
      
       
