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

    string str;

    cin >> str;

    int b = 0, s = 0, c =0;

    for(int i = 0; i< str.size() ; i++){
        if(s[i] == 'B')b++;
        else if(s[i] == 'S')s++;
        else c++;   //thats my boiii
    }


    int nb , ns , nc ;
    sd(nb); sd(ns); sd(nc);

    int pb , ps , pc;
    sd(pb); sd(ps); sd(pc);

    int temp = nb / b;

    if(ns / s < temp)temp = ns / s;
    if(temp > nc / c)temp = nc / c;

    nb -= temp * b;
    ns -= temp * s;
    nc -= temp * c; 

    int ans = temp;

    




           
     
     
        
    return 0;
}
