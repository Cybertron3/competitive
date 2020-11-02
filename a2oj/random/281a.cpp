
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

   
        int temp; 


    if(arr[0] > 95){

     

        temp = arr[0];

        temp = temp - 97 + 65;


        printf("%c",temp);
        
    
    }else{
       

            temp = arr[0];
          
            printf("%c", temp );
      
    }

    for(int i = 1; i< n ; i++){

            temp = arr[i];
           
            printf("%c", temp );
        }

    printf("\n");


           
     
     
        
    return 0;
}
