
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

	ll l , r , m;
	cin >> l >> r >> m;

	ll diff = r - l;
	ll rem;

	forn(a , l , r+1){

		if(m >= a){
			rem = m % a;
			if(rem <= diff ){
				
				cout << a << " " << l + rem << " " << l << "\n";
				return;

				//
			}else if(a - rem <= diff){
				cout << a << " " << l  << " " <<  l + a - rem << "\n"; 
				return;
			}
		}else{
			rem = a - m;

			if(rem <= diff){

				cout << a << " " << l << " " << l + rem << "\n";
				return;
			}

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
      
       
