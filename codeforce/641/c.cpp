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

ll lcm (int x , int y){
    return (ll)(x*y)/__gcd(x , y);
}


void solve(){

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    ll l = lcm(arr[0] , arr[1])  ;
    ll hf = l;

    forn(i,2,n){
        cout << hf << "\n";
        l = lcm(arr[i-1] , arr[i]);
        hf = __gcd(hf , l);
    }

    cout << hf << "\n";
    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
