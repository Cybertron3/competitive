
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


    string arr; cin >> arr;

    int pres[26] = {0};

    int n = arr.size();

    for(int i = 0; i< n ; i++){
        pres[arr[i] - 97] = 1;
    }

    int ans = 0;

    for(int i = 0; i < 26; i++){
        if(pres[i] != 0)ans++;
    }


    if(ans % 2 == 0)printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
           
     
     
        
    return 0;
}
