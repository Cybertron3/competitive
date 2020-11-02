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

const int N = 1e5 + 10 , mod =  998244353;

ll mul(ll x , ll y){
	return (x*y)%mod;
}


int main(){
    SPEED;
    
    int n, k; cin >> n >> k;

    int p[n];

    forn(i,0,n){
    	cin >> p[i];
    }

    ll maxi = 0;

    nfor(i , n , n-k+1){
    	maxi += i;
    }

    cout << maxi << " ";


    bool flag[n];

    memset(flag , false , sizeof(flag));

    forn(i,0,n){
    	if(p[i] > n-k)flag[i] = true;
    }

    ll ans = 1, lst = -1;

    forn(i,0,n){
    	if(flag[i]){
    		if(lst != -1){
    			ans = mul(ans , i-lst);
    		}
    		lst = i;

    	}
    }

    cout << ans << endl;
    
    return 0;
}
      
       
