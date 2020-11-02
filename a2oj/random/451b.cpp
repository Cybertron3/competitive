
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

    int n; sd(n);

    int arr[n];

    for(int i= 0; i< n; i++)sd(arr[i]);

    int flag = 0;

    bool flagg = false;

    int st = 0 , end = 0;

    for(int i = 1; i< n ; i++){

        flagg = false;
        
        if(arr[i-1] > arr[i]){
            st = i - 1;
            flag++;
        }
        while(i < n && arr[i -1] > arr[i] ){

            flagg = true;
            
            end = i;
            
            i++;
        }

       
        if(flagg  && i < n && arr[i] < arr[st] ){
            flag++;
            //cout << "i = "<< i << " , flag == " << flag;
        }
       // cout << "i = "<< i << " , flag == " << flag << " st = " << st  ;
        if(flagg && st > 0 && arr[st-1] > arr[end]){
            flag++;
           // cout << " sdkmksfkmk";
            
        }

        if(flag > 1)break;
    }

    if(flag > 1)printf("no\n");
    else{
        printf("yes\n");
        printf("%d %d\n",st + 1 , end + 1);
    }


           
     
     
        
    return 0;
}
      
       