
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

    int n; sd(n);

    int a[n] , b[n], arr[1001] = {0},pres[1001] = {0};

    for(int i = 0; i< n ; i++){
        sd(a[i]); sd(b[i]);


        arr[b[i]] = a[i];
        pres[a[i]]++;
    }

    int ans = 0;

    for(int i = 0; i< n ; i++){
        if(pres[arr[a[i]]] == 1 &&  arr[a[i]] != a[i]  ){
            
            ans++;
        }else{
            int j ;
            for(j = 0; j < n ; j++){
                if(a[i] == b[j] && i != j){
                    ans++;
                    break;
                }
            }
        }

    }

    pd(n-ans);


           
     
     
        
    return 0;
}
      
       