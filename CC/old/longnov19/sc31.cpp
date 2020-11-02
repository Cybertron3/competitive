
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

    int t; sd(t);

    while(t--){
        int n; sd(n);

        string s , stemp;

        cin >> s;

     
        for(int i = 0; i < n-1 ; i++){
            cin >> stemp;

            for(int j = 0; j < 10; j++){
                if( (s[j]=='1' && stemp[j] == '0') || (s[j] == '0' && stemp[j] == '1') ){
                    s[j] = '1';
                    
                }else s[j] = '0' ;
            }
        }

        int ans = 0;

        for(int i = 0; i< 10 ; i++){
            if(s[i] == '1')ans++;
        }



        pd(ans);

       

    }


           
     
     
        
    return 0;
}
