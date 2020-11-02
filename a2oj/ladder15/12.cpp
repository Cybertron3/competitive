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

void solve(){

    int n , m; cin >> n >> m;
    int inp , curr = 1;
    ll ans  =0;
    for(int i = 0; i<m ; i++){
    	cin >> inp;
   
 		ans+=(inp - curr);
    	if(inp < curr) ans += n;
    	
    	curr = inp;
    }

    cout << ans << "\n";
    
        


}

int main(){
    SPEED;
 solve();




    return 0;
}
      
       
