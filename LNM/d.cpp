#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007


#define max 100000

ll moding( ll x , ll y ){
    // cybertrone
    // for x % y

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


int fun( int n  ,int arr[][max] , int count , int pres[] , int col );

int main(){

    int n , m; 
    sd(n); sd(m);

    int arr[n+1][max] = {0};

    int x , y;

    for(int i = 0; i< m ; i++){
        sd(x); sd(y);

        arr[x][y] = 1;
        arr[y][x] = 1;

    }


    int pres[n+1] = {0};

    int ans[n+1] = {0};

    

  //  cout << "been there \n";

    for(int i = 1 ; i <= n ; i++){
        
        if(pres[i] == 1)continue;

        ans[fun( n , arr  , 1 , pres , i)]++;

    }

    ll count = 0;

    int j = 1;

    for(int i = n ; i> 0 ; i--){
   //     cout << " i = " << i << "  ans[i] = " << ans[i] << endl; 
        while(ans[i] != 0){
            count += (i * j);
            ans[i]--;
            j++;

       //     cout << " ans = " << count << endl;
        }

    }

    pld(count);



     
     
        
    return 0;
}


int fun( int n  ,int arr[][max] , int count , int pres[] , int col ){

  //  cout << "fun starts    ";

    if(pres[col] == 1 )return count;

 


    pres[col] = 1;

    for(int i = 1 ; i <= n ; i++ ){
        if(arr[i][col] == 1){


            count++;
            arr[i][col] = 0;
            arr[col][i] = 0;
            count = fun( n , arr , count , pres , i );


        }
    }

  //  cout << "fun ends \n";

    return count;


}