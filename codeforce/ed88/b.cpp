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

    int n , m, x ,y;

    cin >> n >> m >> x >> y;

    string str[n];
    forn(i,0,n)cin >> str[i];

    ll ans = 0;

    if(2*x <= y){
        forn(i,0,n){
            forn(j,0,m){
                if(str[i][j] == '.'){
                    ans++;
                }
            }
        }

        cout << ans * x << "\n";

    }else{
        
        forn(i,0,n){
            
            forn(j,0,m){
                if(str[i][j] == '.'){
                    if(j + 1 < m && str[i][j+1] == '.'){
                        ans+=y;
                        j++;
                    }else{
                        ans+=x;
                    }
                }

            }
        }

        cout << ans << '\n';

    }
    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
