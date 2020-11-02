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

bool islucky(int x){
    while(x){
        if(x % 10 != 4 && x % 10 != 7){
            return false;
        }

        x = x / 10;
    }

    return true;
}

void solve(){

    int n; cin >> n;

    forn(i,4,n+1){
        if(n % i == 0 && islucky(i)){
            cout << "YES\n";
            return;
        }
    }
   

    
    cout << "NO\n";

    
    
        


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
    
  

    while(t--){
        solve();
    }




    return 0;
}
      
       
