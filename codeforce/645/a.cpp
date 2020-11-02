//PLUS ULTRA


#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    int n , m; cin >> n >> m;

    // if(n > m){
    //     int temp = n;
    //     n = m;
    //     m = n;
    // }

    // if(n == 1){
    //     m = m/2;
    //     m++;
    //     cout << m << "\n";
    //     return;
    // }

    n = n * m;

     n = (n-1)/2;
     n++;

     cout << n << "\n";

    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
