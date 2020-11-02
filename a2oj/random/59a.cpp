
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

    string arr;

    cin >> arr;

    int n = arr.size();

    int u = 0, l = 0;

    for(int i = 0; i < n ; i++){
        if(arr[i] < 97)u++;
        else l++;
    }

    int temp;

    if(u > l){
        for(int i = 0; i< n ; i++){

            temp = arr[i];
            if(arr[i] > 95){
                temp = temp - 97 + 65;
                
            }

            printf("%c", temp );
        }
    
    }else{
        for(int i = 0; i< n ; i++){

            temp = arr[i];
            if(arr[i] < 95 ){
                temp = temp - (65 - 97); 

            }

            printf("%c", temp );
        }
    }

    printf("\n");


           
     
     
        
    return 0;
}
