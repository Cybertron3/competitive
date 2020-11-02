
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

    string arr; cin >> arr;

    int one = 0, two = 0 , three = 0;

    int n = arr.size();

    for(int i = 0; i< n ; i+= 2){

        if(arr[i] == '1')one++;
        else if(arr[i] == '2')two++;
        else three++;


    }   

    int temp = 0;  

    if(one != 0){
        printf("1");
        temp++;
    }

    while(one > temp){
        printf("+1");
        temp++;
    }

    temp = 0;

    if(one == 0 && two > 0){
        printf("2");
        temp++;
    }

    while(two > temp){
        printf("+2");
        temp++;
    }

    temp = 0;

    if(one + two == 0 ){
        printf("3");
        temp++;
    }

    while(three > temp){
        printf("+3");
        temp++;
    }


     
        
    return 0;
}
