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
#define forn(i,n) for(int i = 0; i < n ; i++)

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


int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}




int main(){

    int k; sd(k);

    string str; cin >> str;

    int n = str.size();

    int arr[26] = {0};

    forn(i,n){
        arr[moding(str[i],'a')]++;
    }

    bool flag = true;

    forn(i,26){
        if(arr[i]%k != 0 )flag = false;
    }

    if(flag){
        forn(i,26)arr[i] = arr[i] / k;

       

        while(k--){
            forn(i,26){
                forn(j,arr[i]){
                    printf("%c", i+'a' );
                }
            }

        }

        printf("\n");

    }else{
        printf("-1\n");
    }




           
     
     
        
    return 0;
}
      
       