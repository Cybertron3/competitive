
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

    int n , m ; sd(n); sd(m);

    int arr[n];

    for(int i = 0; i< n ; i++)sd(arr[i]);

    int  max  , temp , ans =0;

    if(arr[0] % m == 0)max = arr[0] / m;
    else{
            max = arr[0] / m;
            max++;
    }

    for(int i = 1 ; i< n ; i++){
        if(arr[i] % m == 0)temp = arr[i] / m;
        else{
            temp = arr[i] / m;
            temp++;
        }
        if(temp >= max){
            ans = i;
            max = temp;
        }


     //   cout << max << " " << temp << " " << arr[i] << " " << ans << endl;
    }

    cout << ans + 1 << endl;

           
     
     
        
    return 0;
}
