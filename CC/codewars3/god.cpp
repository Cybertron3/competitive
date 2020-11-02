//PLUS ULTRA
//one who atops 

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

// bool visited[200000+1];
// int parent[200000+1];

const int N = 1e5 + 10 , mod =  1000000007;

void parenting(int u , vector<int> tre[] , int parent[] , bool visited[] ){
    cout << "fun start\n";
    forn(j,0,tre[u].size()){

        if(!visited[tre[u][j]]) parent[tre[u][j]] = u;
    }

    visited[u] = true;

    forn(j,0,tre[u].size()){
        parenting(tre[u][j] , tre , parent , visited);
    }

    cout << "fun ends\n";

}

void solve(){



    int n , q;
    cin >> n ; // >> q;

    std::vector<int> tre[n+1];

    int u , v;
    forn(i,0,n-1){
        cin >> u >> v;
        tre[u].pb(v);
        cout << "1 "; 
        tre[v].pb(u);
        cout << 2 << "\n";
    }

    int parent[n+1];
    bool visited[n+1];
    memset(visited , false , sizeof(visited));
    memset(parent  , 0 , sizeof(parent));

    parenting(1 , tre, parent , visited);

    cout << "ben her";

    forn(i,1,7){
        cout << i << " " << parent[i]  ; 
    }

       


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
