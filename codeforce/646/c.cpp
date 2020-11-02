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

    int n , x; cin >> n >> x;
    std::vector<int> tree[n+1];

    int u, v;

    forn(i,0,n-1){
        cin >> u >> v;
        tree[u].pb(v);
        tree[v].pb(u);
    }


    if(tree[x].size()  <= 1){
        cout << "Ayush\n";
        return;
    }

 

    /*

        (1) --- ((2)) --- (3)  (4)---(6)
                  |
                  |
                 (5)

        remove 4 , 6
        remove 1 :
            ((2)) --- (3)  
              |
              |
             (5)

            2 is still not a leaf

        remove 5:
            ((2)) --- (3)  

            now 2 is leaf.

        optimal way ye hai ki x se connected jo nodes hai unko chor ke 
        sare node hata do phle,
        phir ek ek karke x ke adjacent node del karo,
        x tab hi del hoga jab iska sirf ek adjacent node bachega,

        toh matlb total 2 element bache honge, 

        toh n-2 element ke bad jiska turn hoga wo jeet jaega



    */


    
    if( (n - 2 ) % 2 == 1){

        cout << "Ashish\n";

    }else cout << "Ayush\n";
    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
