
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

    int arr[129];

    arr[1] = 0;
    

    int present[129] = {0};

  //  present[0] = 1;

    for(int i = 2; i< 129 ; i++){
        if(present[arr[i-1]] != 0  ){
            arr[i] = i - present[arr[i-1]] - 1;
            present[arr[i-1]] = i-1 ;
        }else{
            present[arr[i-1]] = i-1;
            arr[i] = 0;
        }
    }

    int t; sd(t);

    while(t--){
        int n; sd(n);
        int ans = 1;

        for(int i = 1; i < n; i++){
            if(arr[i] == arr[n])ans++;
        }

        pd(ans);


    }

           
     
     
        
    return 0;
}
