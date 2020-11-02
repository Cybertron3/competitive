
/* 

use dp to store ans for ith length subsqence 

i+1 will use ans of ith length subs ( num of group including ith index)

vipin_.kumar 




*/

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define dracarys(x) printf("%d\n",x)

#define moder 1000000007

ll min(ll a, ll b);

ll fun(ll n, ll k);
     
     
int main(){

	int n , k;

	sd(n); sd(k);

	int arr[n];

	for(int i = 0; i< n ;i++){
		sd(arr[i]);
	}

	int present[8001] = {0} ;

	for(int i = 0; i< n ; i++){
		present[arr[i]]++;
	}

	ll ans = 1;

	std::vector<int > cop;  // count of prime

	for(int i = 2; i< 8001; i++){
		if(present[i] != 0){
			cop.push_back(present[i]);

		}
	}

	ll sum = 1;

	for(int i = 1 ; i <= k ; i++ ){

		sum = (sum  +   ) % moder ;


	}

           
     
     
        
    return 0;
}


ll fun(ll n, ll k){

    ll C[n + 1][k + 1]; 
    ll i, j; 
  
    for (i = 0; i <= n; i++) {

        for (j = 0; j <= min(i, k); j++){

            if (j == 0 || j == i) 
                C[i][j] = 1; 

            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
} 
  

ll min(ll a, ll b){ 
    return (a < b) ? a : b; 
} 
