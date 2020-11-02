
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

    int arr[3][3];

    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 3 ; j++){
            arr[i][j] = 1;

        }
    }

    int inp;

    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 3 ; j++){
            sd(inp);

            inp = inp % 2;

            arr[i][j] = arr[i][j] ^ inp;

            
            if(i!=2)arr[i+1][j] = arr[i+1][j] ^ inp;
            if(j!=2)arr[i][j+1] = arr[i][j+1] ^ inp;
            if(i != 0)arr[i-1][j] = arr[i-1][j] ^ inp;            
            if(j != 0)arr[i][j-1] = arr[i][j-1] ^ inp;
        }
    }

    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 3 ; j++){
            printf("%d",arr[i][j] );

        }

        printf("\n");
    
    }



           
     
     
        
    return 0;
}
