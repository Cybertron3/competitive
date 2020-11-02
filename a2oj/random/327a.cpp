
// from a scalar

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007

ll moding( ll x , ll y ){
   
    ll ans = x % y;

    if(ans < 0)ans = ans + x ;

    return ans ;

}


bool isprime(ll n){
    if(n==2) return true;
    if(n==3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    ll i = 5,w=2;

    while(i*i <= n){
        if(n%i == 0)return false;

        i += w;
        w = 6 - w;
    }

    return true;
}




int main(){

    int n ; sd(n);


    int arr[n];

    for(int i = 0; i<n ; i++){
        sd(arr[i]);
    }

    int max= 0 , sum = 0;

    for(int j = 0 ; j < n ; j++)sum+=arr[j];


    for(int i = 0; i<n ; i++){

        int temp = sum;

        

        for(int j = i; j<n ; j++ ){
            temp += (1 - arr[j]*2); 
            if(temp > max)max = temp;

        }
        

    }


    pd(max);


    



           
     
     
        
    return 0;
}
      
       