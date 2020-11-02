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

    ll i = 5,w=2;

    while(i*i <= n){
        if(n%i == 0)return false;

        i += w;
        w = 6 - w;
    }

    return true;
}




int main(){

    int n , s , t;
    sd(n); sd(s); sd(t);

    int arr[n+1];

    for(int i = 1 ; i<= n ; i++)sd(arr[i]);

    int ans = 0;

    int i , temp;

    for( i = s ; i != t && arr[i] != -1;  ){
        ans++;
        temp = i;
        i = arr[i];
        arr[temp] = -1;

    }


    if(i==t) pd(ans);
    else printf("-1\n");


           
     
     
        
    return 0;
}
