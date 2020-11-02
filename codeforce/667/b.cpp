//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
using namespace std;
     
     
#define Fast_as_duck ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define rev(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

ll fun(int a , int b , int x , int y , int n){
    if(a - x < n){
        n -= (a-x);
        a = x;
    }else{
        // n = 0;
        a = a - n;
        n = 0;
    }

    if(b - y < n){
        n -=(b-y);
        b = y;
    }else{
        b = b - n;
    }

    return (ll)a*b;

}

void solve(){

    int a , b ,x ,y , n;

    cin >> a >> b >> x >> y >> n;

    ll ans = fun(a , b , x , y , n);
    ll tmp = fun(b , a , y , x , n);

    // if(ans < tmp)ans = tmp;

    cout << min(ans , tmp) << "\n";

    
    

    
    
        


}

int main(){
    Fast_as_duck;

/*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
