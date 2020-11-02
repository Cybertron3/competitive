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

ll f(ll x){
    int i = 2;
 
    while(i*i <= x){
        if(x%i == 0)return i;
        i++;
    }

    return x;

}

void solve(){

    ll n , k; cin >> n >> k;

    ll ans = 0;

    forn(i,0,k){

        if(f(n) == 2){
            n = n + 2*(k-i);
            break;
        }
        n =  n + f(n);

    }

    cout << n << "\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
