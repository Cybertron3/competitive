
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

    int n , t;

    sd(n); sd(t);

    string str;

    cin >> str;

    for(int j = 0; j< t; j++){
        for(int i = 0; i < n-1 ; i++){
            if(str[i] == 'B' && str[i+1] == 'G'){
                str[i] = 'G';
                str[i+1] = 'B';
                i++;
            }
        }
    }

    cout << str << endl;


           
     
     
        
    return 0;
}
