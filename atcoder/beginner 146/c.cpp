
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

    if(ans < 0)ans = ans + y ;

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

int len(ll x){
    int ans = 0;
    while(x){
        x= x / 10;
        ans++;
    }
    return ans;
}




int main(){

    ll a , b, x; sld(a); sld(b); sld(x);

    ll temp , ans = 0;

    for(int i = 9; i > 0; i--){
        temp = x - b * i;

      //  cout << temp << "  ";
        temp = temp / a;

        if(ans < temp && i == len(temp)) ans = temp ;
     
     //   cout << temp << endl;
        

    }

 
    if(1000000000 * a + 10 * b == x)ans = 1000000000 ;
    
    if(ans > 1000000000 ) ans = 1000000000;
    
    pld(ans);


           
     
     
        
    return 0;
}
   

       