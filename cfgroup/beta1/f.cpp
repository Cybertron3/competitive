//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
using namespace std;
     
     
#define Fast_as_duck ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define rev(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

int main(){
    Fast_as_duck;


    int t = 1 , k;     
    cin >> t >> k;

    ll dp[N];
    memset(dp , 0 , sizeof(dp));
    ll sum[N];
    memset(sum , 0 , sizeof(sum));

    sum[0] = 1;
    dp[0] = 1;

    forn(i,1,k){
        dp[i] = 1;
        sum[i] = sum[i-1] + 1;
    }


    dp[k] = 2;
    sum[k] = sum[k-1] + 2;

    forn(i,k+1,N){
        dp[i] = (1 + sum[i-k])%mod;
        sum[i] = (sum[i-1] + dp[i])%mod;
        // cout << i <<  " " << dp[i] << "\n";

    }
    
    int a, b;

    // cout << dp[4] << "\n";
    while(t--){
        cin >> a >> b;
        // a--; b--;
        ll ans = sum[b] - sum[a-1];
        if(ans < 0)ans = ans+mod;

        cout << ans << "\n";

       
    }

    return 0;
}
      
       // 999900929
