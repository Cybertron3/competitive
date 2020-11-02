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

int gcd(int x , int y){
	if(y == 0)return x;
	else return gcd(y , x % y);
}

void solve(){

	int k ; cin >> k;

	ll sum = 0;

	forn(a,1,k+1){
		forn(b,1,k+1){
			int x = gcd(a , b);
			forn(c, 1 , k+1){
				sum += gcd(x , c);

			}
		}
	}
    
    cout << sum << endl;



}

int main(){
    SPEED;

    solve();

    return 0;
}
      
       
