
// from a scalar

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%llu",&x)
#define pld(x) printf("%llu\n",x)
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

    ll n , x;

    sld(n); sld(x);

    int arr[n];

    for(int i = 0; i< n ; i++)arr[i] = i+1;

    ll fact[n] = {1};

    for(int i = 1; i < n; i++)fact[i] = fact[i-1] * i;

    while(x > 0){

        int j = 1;

        while(x < fact[j])j++;

        

    }





           
     
     
        
    return 0;
}
