#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define dracarys(x) printf("%d\n",x)

ll min(ll a, ll b){ 
    return (a < b) ? a : b; 
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
  
ll first( int arr[] , int n , int k );

ll second( int arr[] , int n , int k );
     
int main(){

  //  int t; sd(t);

    while(1){
        int n , k;
        //sd(n); sd(k);

        srand(time(0));

        n = rand() % 50  ;
        n = n + 1 ;

        k = (rand() % n ) + 1;

        int arr[n];

        for(int i = 0; i< n; i++) { //sd(arr[i]);

            arr[i] = (rand() *( (i+ rand()) % 1100 ) ) % 100 ;  
            if(arr[i] < 0)arr[i] *= -1;
            arr[i] = arr[i ] % 100;
            arr[i] += 1;


        }

        sort(arr , arr + n);


        if(first(arr , n , k) != second(arr , n , k)){
            printf(" n =  %d , k  = %d \n" , n , k);

            for (int i = 0; i < n; ++i) printf("%d ",arr[i] );

            printf("first = %lld\n",first(arr , n , k) );
            printf("second = %lld\n",second(arr , n , k));
    
        
            break;            

        }else printf("ALL OKAY!!!!\n");

       
        

    }

           
     
     
        
    return 0;
}

ll first( int arr[] , int n , int k ){
     ll sum = 0;

        for(int i = 0; i< k ;i++){
            sum += arr[i];
        }

        ll tsum = sum;

        ll ans = k;

        for(int i = k ; i< n ; i++){
            tsum =  tsum + arr[i] - arr[i-k] ;
            if(tsum == sum){
                ans++;

            }else break;
        }

        return ( fun(ans , k) );

}



ll second( int arr[] , int n , int k ){
    ll ans = 0;
        
        ll j = k-1;
        
        for(int i = k-2; i >= 0 ;i--){
            if(arr[i] != arr[k-1]){
                j = i+1;
                break;
            }
            
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