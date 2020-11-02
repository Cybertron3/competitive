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
    int n; cin >> n;

    int h[n];

    forn(i,0,n){
  		cin >> h[i];

    }


    int dp[n];

    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    forn(i,2,n){
    	dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]) , dp[i-2] + abs(h[i]- h[i-2]));
    }

    cout << dp[n-1] << endl;


    
    return 0;
}
      
       
