
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




int main(){

    int arr[4][4] = {0};
    int temp;
    string faltu;

    forn(i,4){
        cin >> faltu;
        forn(j,4){
            
            if(faltu[j] == '#')arr[i][j] = 1;
        }
    }

    bool flag = false;

    forn(i,3){
        forn(j,3){
            temp = arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i+1][j+1];
            if(temp != 2 ){

                flag = true;
                break;
            }

            //cout << i << "   " << j << "  "<< temp << " ";

        }
    }

    if(flag)printf("YES\n");
    else printf("NO\n");


           
     
     
        
    return 0;
}
      
       