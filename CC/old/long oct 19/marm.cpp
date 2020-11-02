#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007



int main(){

    int t; sd(t);

    while(t--){

        ll n , k;

        sld(n); sld(k);

        int arr[n];

        

        for(int i =0; i< n ;i++)sd(arr[i]);

        ll temp = k / n;

        if(n%2 == 1 && k > n )arr[n/2] = 0;

        if(temp % 3 == 0){
   
            k = k % n;

            for(int i = 0; i < k; i++){
                arr[i] = arr[i] ^ arr[n - 1 - i];
            }



        }else if(temp % 3 == 1 ){

            for(int i = 0; i < n; i++){
                arr[i] = arr[i] ^ arr[n - 1 - i];
            }

            k = k % n; 

            for(int i = 0; i< k ; i++){
                arr[i] = arr[i] ^ arr[n - 1 - i];
            }

        }else{

            for(int i = 0; i < n; i++){
                arr[i] = arr[i] ^ arr[n - 1 - i];
            }

            for(int i = 0; i < n; i++){
                arr[i] = arr[i] ^ arr[n - 1 - i];
            }

            k = k % n; 

            for(int i = 0; i< k ; i++){
                arr[i] = arr[i] ^ arr[n - 1 - i];
            }




        }

        

        for(int i = 0; i< n ;i++){
            printf("%d ", arr[i]);
        }

        printf("\n");

    }
           
     
     
        
    return 0;
}

