//Lion's Sin Escanor 

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007
#define forn(i,n) for(int i = 1; i <= n ; i++)

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

ll cmp(string s1 , string s2){
    // 1 for diff
    // 0 for same 

    int n = s1.size();
    int m = s2.size();

    if(n!=m)return 1;

    forn(i,n)
        if(s1[i] != s2[i])return 1;


    return 0; // SAME
}




int main(){

    int r , c; sd(r); sd(c);
    if(r == 1 && c == 1)printf("0\n");
    else if(r == 1){
        for(int i =  1; i <= r ; i++){
            for(int j = r+1 ; j <= r+c ; j++){
                printf("%d ",i*j);

            }

            printf("\n");
        }

    }
    else{

        for(int i = c + 1; i <= c+r ; i++){
            forn(j,c){
                printf("%d ",i*j);

            }

            printf("\n");
        }

    }
           
     
     
        
    return 0;
}
      
       