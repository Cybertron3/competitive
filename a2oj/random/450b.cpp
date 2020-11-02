
// watashi wa , MAOU da

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

    if(ans < 0)ans = ans + y ;

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

    ll arr[9];
    sld(arr[1]); sld(arr[2]);   

    ll n ; sld(n);

    arr[1] = moding(arr[1] , moder);
    arr[2] = moding(arr[2] , moder);

    for(int i = 3; i<= 6 ; i++){
        arr[i] = arr[i-1] - arr[i-2];

        arr[i] =  moding(arr[i] , moder);

    }

    n = n % 6;
    if(n==0)n=6;

    pld(arr[n]);


    

    








           
     
     
        
    return 0;
}
      
       