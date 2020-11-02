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

    string str;
    cin >> str;
    int n = str.size();

    ll ans = 0;
    forn(i,0,n-1){
        if(str[i] != str[i+1]){
            ans++;
            i++;
        }
    }


    cout << ans << "\n";

    

    
    
        


}

int main(){
    SPEED;


    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
