//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

ll power2(int x , int n){
	
	while(n-- && x > 20 ){
		x=(x/2) + 10 ;
	}

	return x;
}

void solve(){

	int x , n , m; cin >> x >> n >> m;

	x =  power2(x , n);

	

	if(x > 0){
		x = x - m*10;
		//cout << x << endl;
		if(x <= 0)cout << "YES" ;
		else cout << "NO";
	}else cout << "YES";

	cout << endl;


    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
