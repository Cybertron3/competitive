
// if(result == AC) Watashi = Kami ;

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

        int n ; sd(n);

        ll ps = 1;

        std::vector<int> arr(n , 1);

        

        ll sum = n ;

        int i = 0;

        while(ps*ps != sum && ps*ps <= n*81){

            

            while(ps*ps < sum){
                ps++;

                
            }
        
            while(sum < ps*ps){
                sum -= (arr[i]*arr[i]);
                arr[i]++;
                sum += (arr[i]*arr[i]);
                i = (i+1)%n;

            }


        }

        if(ps*ps > n*81){
            printf("-1\n");

        }else{



            for(int j = n-1; j >= 0; --j){


                printf("%d",arr[j] );
            }

            printf("\n");

        }
        


       


    }


           
     
     
        
    return 0;
}
