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

void solve(){

	int n , m; cin >> n >> m;

	int sum  = 0, inp;

	forn(i,0,m){
		cin >> inp;
		sum+= inp;
	}    

	if(n - sum < 0)cout << -1 << endl;
	else cout << n - sum << endl;
    



}

int main(){
    SPEED;

    solve();

    return 0;
}
      
       
