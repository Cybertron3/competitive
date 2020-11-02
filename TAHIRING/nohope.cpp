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

void mark(std::vector<int> city[] ,bool visited[] ,  int n , int u){

    forn(i,0,city[u].size()){
        if(!visited[city[u][i]]){
            visited[city[u][i]] = true;
            mark(city , visited, n , city[u][i]);
        }
    }

}


void solve(){

    int n , m; cin >> n >> m;

    std::vector<int> city[n+5];

    int u , v;
    forn(i,0,m){
        cin >> u >> v;
        city[u].pb(v);
        city[v].pb(u);
    }

    bool visited[n+5];
    memset(visited , false , sizeof(visited));

    int ans = 0;


    // cout << "all ok";

    forn(i,1,n+1){
        if(visited[i])continue;
        visited[i] = true;
        ans++;
        mark(city , visited , n , i);
    }

    cout << ans << "\n";

    


    
    

    
    
        


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
      
       
