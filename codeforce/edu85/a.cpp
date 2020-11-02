//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define S second
#define F first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;






void solve(){

	int n; cin >> n;

	int p[n] , c[n];

	forn(i,0,n){
		cin >> p[i] >> c[i];

	}


	int play = p[0], cn = c[0];

	if(p[0] < c[0]){
		cout << "NO" << endl;
		return;
	}

	forn(i,1,n){
		if(p[i] >= p[i-1]  &&c[i] >= c[i-1] && c[i] - c[i-1] <= p[i] - p[i-1]){
			continue;
		}else {
			cout << "NO" << endl;
			return;
		}

	}


	cout << "YES" << endl;






}



int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	solve();
    }
    

    
    return 0;
}
      
       
