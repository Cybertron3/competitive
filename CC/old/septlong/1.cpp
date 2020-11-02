#include<bits/stdc++.h>
using namespace std;
     
     
#define ll long long int
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)


ll hP2(ll n);
void fib(int f[], int n);
ll fLD(ll n);

int main(){

    int t; sd(t);
    
    while(t--){
        ll n; sld(n);

        ll num = (hP2(n)-1)%60;
        ll res = fLD(num);
  
        pld(res);
    
    }
    
    return 0;
}

ll hP2(ll n) {
  //  ll p = (ll)log2(n);
  //  return (ll)(pow(2.0, p) + 0.5);

    ll p = 0;

    n /= 2;

    while(n > 0){
        n = n / 2;
        p++;
    }

    ll num = 1;

    while(p){
        num *= 2;

        p--;
    }

    return num;
}

void fibo(int f[], int n) {
    f[0] = 0; 
    f[1] = 1;  
    for (int i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10;  

  //  printf("f[n] = %d\n",f[n]); 
    
  //  return f[n]; 
}

ll fLD(ll n) {
    int f[61] = {0};  
    fibo(f, n);
    return f[n % 60]; 
}