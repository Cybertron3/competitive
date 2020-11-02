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

    int s , n; cin >> s >> n;

    std::vector<pii> v;

    int x , y;

    forn(i,0,n){
    	cin >> x >> y;
    	v.pb({x,y});
    }

    sort(v.begin() , v.end());

    forn(i,0,n){
    	// s = v[i].ff;
    	if(s <= v[i].ff){
    		cout << "NO\n";
    		return;
    	}

    	s+=v[i].ss;
    }

    cout << "YES\n";

    
    
        


}

int main(){
    SPEED;

   solve();




    return 0;
}
      
       
