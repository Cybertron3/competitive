
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

    ll x , y, c1 , c2;

    sld(x); sld(y); sld(c1); sld(c2);

    ll need = y - x;

    ll ans = 0;

    if(need > 0){

        if(2*c1  >  c2){
            ans = c2*(need/2);
            if(need % 2 == 1)ans += c1;

        }else{
            ans = c1*need;
        }
    }


    pld(ans);



           
     
     
        
    return 0;
}
