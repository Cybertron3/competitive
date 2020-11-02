#include<bits/stdc++.h>
using namespace std;
     
     
#define ll long long int
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
const int MOD = 1e9+7, N = 1e7 + 10;
long long int highestPowerof2(ll n);
ll fib(ll f[], ll n);
ll findLastDigit(ll n);

int main(){

    int t;
    cin >> t;
    while(t--){

        ll n;
        cin >> n;
        ll num = (highestPowerof2(n)-1);
        cout << num << endl;
        int res = findLastDigit(num);

        cout << res << endl;
    }
    return 0;

}


// C++ program to find highest power of 2 smaller 
// than or equal to n. 
 


ll highestPowerof2(ll n){ 
ll p = (ll)log2(n); 
cout << p << endl;
return (ll)pow(2, p);

}

//calculate 60 fibonacci
ll fib(ll f[], ll n){ 
    // 0th and 1st number of 
    // the series are 0 and 1 
    f[0] = 0; 
    f[1] = 1; 
  
    // Add the previous 2 numbers  
    // in the series and store  
    // last digit of result 
    for (ll i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 

// Returns last digit of n'th Fibonacci Number 
ll findLastDigit(ll n) { 
    ll f[60] = {0}; 
  
    // Precomputing units digit of   
    // first 60 Fibonacci numbers 
    fib(f, 60);
    ll temp = n%60;
    cout << temp << endl;
    return f[temp]; 
}