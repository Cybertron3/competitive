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
    // cybertrone
    // for x % y

    ll ans = x % y;

    if(ans < 0)ans = ans + x ;

    return ans ;

}

bool isprime(ll n){
    if(n==2) return true;
    if(n==3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    ll i = 5,w = 2;

    while(i*i <= n){
        if(n%i == 0)return false;

        i += w;
        w = 6 - w;
    }

    return true;
}




int main(){

    int n ; sd(n);

    int x[n]; 

    for(int i = 0; i< n ; i++){
        sd(x[i]);
    }

    ll min = 100000000000;

    for(int i = 0; i< n ;i++){

        int temp = 0;

        for(int j = 0 ; j < n ; j++){
            if(i == j)continue ;

            int diff = abs(x[i] - x[j]);

            if(diff % 2== 0)temp++;



        }

        if(min > temp ) min = temp;



    }


           
     
     
        
    return 0;
}

