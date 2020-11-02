#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007

     
     
int main(){

	int n , m;
	sd(n); sd(m);

	int arr[n][m];

	for(int i = 0; i< n ;i++){
		for(int j = 0; j< n ; j++){
			sd(arr[i][j]);
		}
	}

	ll dp[n][m];

	dp[0][0] = 0;

	for(int i = 1; i< n ; i++){
		dp[i][0] = dp[i-1][0] + arr[i][0] ;
	}

	for(int i = 1; i< n ; i++){
		dp[0][i] = dp[0][i-1] + arr[0][i] ;
	}

	int i = 1 , j = 1;


	for( i = 1; i< n ; i++){

		for( j = 1 ; j< n ; j++){
			if(dp[i-1][j] > dp[i][j-1])dp[i][j] = arr[i][j] + dp[i-1][j] ;
			else dp[i][j] = arr[i][j] + dp[i][j-1] ; 
			
		}

	}

	for(int i = 0; i < n ;i++){
		
	}

     
     
        
    return 0;
}
