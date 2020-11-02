//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
// AC
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

bool isprime(ll x){
    
    if(x < 2)return false;
    if(x < 4)return true;

    ll i = 2;

    while(i*i <= x){
        if(x % i == 0)return false;
        i++;
    }

    return true;

}

void solve(){

    ll n; cin >> n;
    
    if(n==1){
        cout << "NO\n";
        return;
    }
    ll x = sqrt((double)n);
    if(x*x == n && isprime(x))  cout << "YES\n";
        

    else cout <<"NO\n";

    

}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
