
// khushboo 

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007
#define forn(i,n) for(int i = 0; i < n ; i++)

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

    int arr[7];

    int sum = 0;

    forn(i,7){
        sd(arr[i]);
        sum += arr[i];
    }     

    int ans = 0;

    n = n % sum;

    if(n==0){
        for(int i = 6; i>=0 ; i--){
            if(arr[i]!= 0){
                ans = i + 1;
                break;
            }
        }
    }else{

        forn(i,7){
            if(n>0){
                n = n - arr[i];
                ans++;
            }else break;
        }
        
    }  

    if(ans == 0)ans = 7;

    pd(ans);



         
     
        
    return 0;
}
