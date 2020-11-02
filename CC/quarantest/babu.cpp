
//PLUS ULTRA
//one who atops 

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

void solve(){

    int n , inp;
    cin >> n ;

    ll ans[n];
    forn(i,0,n){
    	ans[i] = -1;
    }

    std::vector<pii> v;

    forn(i,0,n){
    	cin >> inp;
    	v.pb({inp , i});
    }

    sort(v.begin() , v.end());

    int cnt ,idx ;

    forn(i,0,n){
    	idx = i;
    	i++;
    	cnt = 1;
    	while(i < n && v[i].ff == v[i-1].ff){
    		cnt++;
    		i++;
    	}

    	i--;
    	ans[v[idx].ss]=  (ll) (cnt+v[i].ff) ;

    }


    forn(i,0,n){
    	if(ans[i] != -1){
    		cout << ans[i] << " ";
    	}
    }


    cout << "\n";


    
        


}

int main(){
    SPEED;

    solve();




    return 0;
}
      
       
