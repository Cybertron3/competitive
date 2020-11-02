//PLUS ULTRA
//one who atops 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

	int a , b , q;
	cin >> a >> b >> q;

	ll totsum = 0;

	int temp = min(a , b);
	b = max(a , b);
	a = temp; 

	forn(i,0,b){
		if( ((i%a)%b ) == ((i%b)%a) )totsum++;
	}

	ll l , r;

	while(q--){
		cin >> l >> r;

		

	}
    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
