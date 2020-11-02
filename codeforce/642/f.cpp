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

    int n , m; cin >>  n >> m;

    ll arr[n][m];

    forn(i,0,n){
    	forn(j,0,m){
    		cin >> arr[i][j];
    	}
    }

    ll dp[n][m] ;
    memset(dp , -1 , sizeof(dp));
    
    ll mini;

    forn(i,0,n){
    	forn(j,0,m){

    		if(j <= m-2 ){
    			if(arr[i][j] < arr[i][j+1]){
    				mini = dp[i][j] + arr[i][j+1] - arr[i][j] -1;

    				// cout << mini << "\n";
    				if(dp[i][j] == -1)mini++;
    				if(dp[i][j+1] == -1 || mini < dp[i][j+1]){
    					arr[i][j+1] = arr[i][j] + 1;
    					dp[i][j+1] = mini;
    				}
    				
    			}else{
    				ll temp = arr[i][j] - arr[i][j+1] + 1;
    				mini = dp[i][j] + (temp * (j + 1 + i) );
    				if(dp[i][j] == -1)mini++;
    				if(dp[i][j+1] == -1|| mini < dp[i][j+1]){
    					// arr[i][j] = arr[i][j] - 1;
    					dp[i][j+1] = mini;
    				}

    			}
    		}

    		if(i <= n-2){
    			if(arr[i][j] < arr[i+1][j]){

    				mini = dp[i][j] + arr[i+1][j] - arr[i][j] -1;
    				if(dp[i][j] == -1)mini++;
    				if(dp[i+1][j] == -1 || mini < dp[i+1][j] ){
    					dp[i+1][j] = mini;
    				
    					arr[i+1][j] = arr[i][j] + 1;
    				}
    				
    			}else{
    				ll temp = arr[i][j] - arr[i+1][j] + 1;
    				mini = dp[i][j] + (temp * (j + 1 + i) );
    				if(dp[i][j] == -1)mini++;
    				if(dp[i+1][j] == -1 || mini < dp[i+1][j]){
    					dp[i+1][j] = mini;
    					// arr[i][j] = arr[i]
    				}

    			}

    		}



    	}
    }


    cout << max((ll0,dp[n-1][m-1]) << "\n";

    // forn(i,0,n){
    // 	forn(j,0,m){
    // 		cout << dp[i][j] << " ";

    // 	}

    // 	cout << "\n";
    // }

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
