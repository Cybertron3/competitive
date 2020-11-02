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

int visited[2*N];

void dfs(std::vector<int> path[] , int u , int val ,  int visited[] ){
    visited[u] = val;
    // cout << u << " " << visited[u] << "\n";
    forn(i,0,(int)path[u].size()){
        if(visited[path[u][i]]== 0){
            dfs(path , path[u][i] , val , visited );
        }
    }
}

void solve(){

    int n , m ; cin >> n >> m;

    std::vector<int> frnd[n+1];
    int x , y;
    forn(i,0,m){
        cin >> x >> y;
        frnd[x].pb(y);
        frnd[y].pb(x);
    }

    // cout << "ans from here\n\n\n";

    // std::vector<int> visited(n+1 , 0);
    int val = 0;

    forn(i,0,n){
        if(visited[i+1] == 0){  

            val++;
            visited[i+1] = val;  
            // cout << "dfs " << val << "\n";
            dfs(frnd , i+1 , val , visited);
        }
    }

    std::vector<int> ans(val+1 , 0);



    forn(i,1,n+1){
        // cout << visited[i] << " ";
        ans[visited[i]]++;
    }

    sort(ans.begin() , ans.end());
        
    cout << ans.back() << "\n";
    

    
    
        


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
      
       
