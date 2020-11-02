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

	string s; cin >> s;

	int n = s.size();

	ll ans = 0 , md = 1;

	nfor(i,n-1,0){

		if(s[i] >= 'A' && s[i] <= 'F'){
			ans += (s[i] - 'A' + 10 )*md;

		}else{
			ans += (s[i] - '0')*md;
		}
		md  *= 16;
	}


	cout << ans << endl;
    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
