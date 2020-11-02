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

	int n , inp; cin >> n;

	std::vector<pii> v;

	forn(i,0,n){
		cin >> inp;

		v.pb({inp , i});

	}

	sort(v.begin() , v.end());

	ll sum = 0 ;

	int l = 0 , r = n-1;

	for(int i = n-1 ; i >= 0 ; i--){
		sum += v[i].ff *( max( abs(v[i].ss -l) , abs(v[i].ss - r )   ) );

		cout << v[i].ff << "  "<< v[i].ff *( max( abs(v[i].ss -l) , abs(v[i].ss - r )   ) ) <<endl;

		if( abs(v[i].ss -l) > abs(v[i].ss - r ) )l++;
		else r--;

	}
	
	cout << sum << endl;


}

int main(){
    SPEED;

    solve();

    return 0;
}
      
       
