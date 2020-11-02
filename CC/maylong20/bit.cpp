//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 

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

    unsigned ll x , y;
    ll l,r;

    cin >> x >> y >> l >> r;

    r = max(abs(l) , abs(r));


	ll Zmax = x | y;
    ll tmp = Zmax;
    int i = 0;
    while(tmp>0){
        tmp /= 2;
        i++;
    }

	if(Zmax <= r ){
		cout << Zmax << "\n";
		return;
	}

	// for 15 points


















    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
