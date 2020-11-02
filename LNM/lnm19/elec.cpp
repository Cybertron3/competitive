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

	ll n , m , k;
	cin >> n >> m >> k;
	if(n > m){
		ll t= n;
		n = m;
		m = t;
	}

	
	
		ll tmp = (m-n)/2;

		if(k > tmp){
			m = m - tmp;
			n = n + tmp;

			k = k - tmp;

			if(m==n){
				if(k%2 == 0){
					cout << n ;
				}else{
					cout << n -1;
				}
			}else{
				cout << n ;


			}

		}else{
			m = m - k;
			n = n + k;

			cout << n ;
		}


		cout << "\n";



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();


    return 0;
}
      
       
