
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


int fun(int y);

int main(){

    int y; sd(y);

    while(fun(++y)){
        continue;
    }

    pd(y);


           
     
     
        
    return 0;
}

int fun(int y){
    int arr[10] = {0};

    while(y ){
        if(arr[y%10] == 1)return 1;
        arr[y % 10] = 1;
        y = y / 10;
    }


    return 0;
}
