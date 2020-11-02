//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;



int main(){
    SPEED;

    ll x; cin >> x;

    ll ans = 0;

    ll a;

    ans = x / 500;
    a = (ll)ans * 1000;
    x = x - (ans * 500);

    ans = x/5;

    a += ans * 5;


    cout << a << endl;
    
    return 0;
}
      
       
