
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

    int n , temp ; sd(n);

    int arr[n];

    for(int i =1 ; i<= n;  i++){
        sd(temp);

        arr[temp] = i;
    }

    int m , b; sd(m) ;

    ll pet = 0, vas = 0;

    while(m--){
        sd(b);

        temp = arr[b];

        pet += temp ;
        vas += (n - temp + 1);
       
    }

    printf("%lld %lld\n",pet , vas );

           
     
     
        
    return 0;
}
