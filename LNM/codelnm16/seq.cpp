//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

// int fact(int n) 
// { 
//     int res = 1; 
//     for (int i = 2; i <= n; i++) 
//         res = res * i; 
//     return res; 
// } 

  
// int nCr(int n, int r) 
// { 
//     return fact(n) / (fact(r) * fact(n - r)); 
// } 

void printNcR(ll n, ll r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
    cout << p << endl; 
} 
  

int main(){
    SPEED;

    int n,k; cin >> n >> k;

    int arr[n];
    forn(i,0,n)cin >> arr[i];

    sort(arr , arr + n);

    ll ini = 0,tot = 0;

    forn(i,n-k,n){
        if(arr[i] == arr[n-k])ini++;
    }

    

    forn(i,0,n){
        if(arr[i] == arr[n-k])tot++;
    }

    printNcR(tot,ini);





    
    return 0;
}
      
       
