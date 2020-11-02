//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;



int main(){
    SPEED;

    int n , k; cin >> n >> k;

    ll h[n];

    forn(i,0,n){
    	cin >> h[i];
    }

    ll dp[n]  ;
    dp[0] = 0;
    // forn(i,1,min(k+1,n)){
    // 	dp[i] = abs(h[i] - h[0]);

    // 	forn(j,1,i){
    // 		dp[i] = min(dp[i] , dp[i-1] + abs(h[i] - h[j]));
    // 	}

    // }

    forn(i,1,n){
    	dp[i] = dp[i-1] + abs(h[i] - h[i-1]);
    	nfor(j,i-2,max(i-k ,0 )){
    		dp[i] = min(dp[i] , dp[j] + abs(h[i] - h[j]));
    	} 
    }


    cout << dp[n-1] << endl;



    
    return 0;
}
      
       
