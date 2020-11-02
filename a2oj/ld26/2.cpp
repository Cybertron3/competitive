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

void solve(){

    int a[3] , b[3];

    forn(i,0,3){
        cin >> a[i];
    }

    forn(i,0,3)cin >> b[i];

    int n; cin >> n;
    
    int med = b[0] + b[1] + b[2];
    int cup = a[0] + a[1] + a[2];

    cup = (cup + 4)/5;

    med = (med + 9)/10;
   

    if(cup + med <= n){
        cout << "YES\n";
    }else cout << "NO\n";



    /*

        1 1 3
        2 3 4
        2

    */
        
    

    
    
        


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
    
    // cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
