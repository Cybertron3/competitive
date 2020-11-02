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
	    int n , s;

	cin >> n >> s;

	int p[n];
	forn(i,0,n){
		cin >> p[i];
	}

	int typ;

	int d = 101 ;
	int k = 101;
	forn(i,0,n){
		cin >> typ;
		if(typ == 1){
			if(d > p[i] )d = p[i];
		}
		else {
			if(k > p[i])k = p[i];
		}
	}

	

	if(s + d + k <= 100)cout << "yes";
	else cout << "no";

	cout << endl;



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
