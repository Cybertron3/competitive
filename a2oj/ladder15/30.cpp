//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
// AC
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

// vector<int> G[N];
// bool visited[N];

// void walk(int u){
//     visited[u] = true;
//     forn(i,0,(int)G[u].size()){
//         if(!visited[G[u][i]])walk(G[u][i]);
//     }

// }


int Ci(std::vector<int>& v, int l, int r, int key) 
{ 
    while (r - l > 1) { 
        int m = l + (r - l) / 2; 
        if (v[m] >= key) 
            r = m; 
        else
            l = m; 
    } 
  
    return r; 
} 
  
int lis(std::vector<int>& v) 
{ 
    if (v.size() == 0) 
        return 0; 
  
    std::vector<int> tail(v.size(), 0); 
    int length = 1; // always points empty slot in tail 
  
    tail[0] = v[0]; 
    for (size_t i = 1; i < v.size(); i++) { 
  
        // new smallest value 
        if (v[i] < tail[0]) 
            tail[0] = v[i]; 
  
        // v[i] extends largest subsequence 
        else if (v[i] > tail[length - 1]) 
            tail[length++] = v[i]; 
  
        // v[i] will become end candidate of an existing 
        // subsequence or Throw away larger elements in all 
        // LIS, to make room for upcoming grater elements 
        // than v[i] (and also, v[i] would have already 
        // appeared in one of LIS, identify the location 
        // and replace it) 
        else
            tail[Ci(tail, -1, length - 1, v[i])] = v[i]; 
    } 
  
    return length; 
} 
void solve(){

    // int n; cin >> n;
    // int arr[n+1];
    // for(int i = 1; i<=n ; i++){
    //     cin >> arr[i];
    // }

    
    // int tmp ;

    // forn(i,1,n+1){
    //     tmp = arr[i];
    //     while( i <= n && tmp > i){
    //         G[tmp].pb(i);
    //         G[i].pb(tmp);
    //         i++;
    //     }
    // }

    // int ans  = 0;
    // forn(i,1,n+1){
    //     if(!visited[i]){
    //         ans++;
    //         walk(i);
    //     }
    // }

    

    // cout << ans << "\n";
    

    int n ; cin >> n;

/*
    size of longest possible subsequence

*/

    std::vector<int> v(n);
    forn(i,0,n){
        cin >> v[i];
    }

    
    cout << lis(v) << "\n";


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
