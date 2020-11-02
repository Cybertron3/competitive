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

	int n; cin >> n;

	int arr[n];
	forn(i,0,n)cin >> arr[i];

	int cnt[n][27];

	memset(cnt , 0 , sizeof(cnt));

	forn(i,0,n){
		forn(j,1,27){
			if(j == arr[i])cnt[i][j] = cnt[i-1][j] + 1;
			else cnt[i][j] = cnt[i-1][j];
		}
	}

	forn(j,1,27){
		

	}
    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
