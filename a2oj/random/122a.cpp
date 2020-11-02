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

bool lucky(int x){
	while(x){
		if( x%10!= 4 && x%10 != 7 )return false;
		x /= 10;
	}

	return true;
}


void solve(){
	int n; cin >> n;



	forn(i,1,sqrt(n)+1){
		if(n%i == 0 && (lucky(i) || lucky(n/i) ) ){
			cout << "YES" ;
			return;

		}
	} 


	cout << "NO" << endl;

}


int main(){
    SPEED;
    solve();

	
    return 0;
}
      
       
