#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define dracarys(x) printf("%lld\n",x)

ll min(ll a, ll b);

ll fun(ll n, ll k);

ll second( int arr[] , int n , int k );
     
int main(){

	int t; sd(t);

	while(t--){
		int n , k;
		sd(n); sd(k);

		int arr[n];

		for(int i = 0; i< n; i++)sd(arr[i]);

		sort(arr , arr + n);


		pld(second(arr  , n , k) ); 

		

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

ll second( int arr[] , int n , int k ){
    ll ans = 0;
        
        ll j = k-1;
        
        for(int i = k-2; i >= 0 ;i--){
            if(arr[i] != arr[k-1]){
                
                break;
            }else j = i;
            
        }

    //  printf(" arr[j] = %d , j = %lld\n",arr[j] , j);

        for(int i = j ; i< n ; i++){
        
            if(arr[k-1] == arr[i]){
                ans++;

            }else break;
        }

    //  printf("ans = %lld \n", ans );

        return( fun(ans , k - j ) );

}
