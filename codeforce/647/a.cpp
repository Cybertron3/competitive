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

    ll a , b; cin >> a >> b;

    if(a > b){
        int ans = 0;
        while(a > b){
            if(a % 8 == 0 && a/8 >= b){
                a /= 8;
            }  
            else if(a % 4 == 0 && a/4 >= b){
                a /= 4;
            } 
            else if(a % 2 == 0 && a / 2  >= b ){
                a /= 2;
            }else break;

            
            

            ans++;         

        }

        if(a == b){
            cout << ans << "\n";
        }else cout << "-1\n";

    }else if(a < b){
        int ans = 0;

        while(a < b){
            if(a*8 <= b){
                a *= 8;
            }else  if(a*4 <= b){
                a *= 4;
            }else if(a*2 <= b){
                a *= 2;
            }else break; 
            

            ans++;
        }

        // cout << a << "\n";

        if(a == b)cout << ans << "\n";
        else cout << "-1\n";

    }else cout << "0\n";
    
        


}

int main(){
    SPEED;

/*
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
