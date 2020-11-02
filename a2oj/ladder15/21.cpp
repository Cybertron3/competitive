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

std::vector<int> v[101];
int visited[101];
// queue<int> emp;

void walk(int u , int num){
    visited[u] = num;
    
    forn(i,0,v[u].size()){
        if(visited[v[u][i]] == 0){
            // visited[v[u][i]] = true;
            walk(v[u][i] , num);

        }
    }

}


void solve(){

    int n , m; cin >> n >> m;
    // std::vector<int> v[n+1];

    

    int k , inp;
    std::vector<int> lang[m+1];

    bool flag = false;

    for(int i  = 1 ; i<= n ; i++){
    	cin >> k;
        if(k > 0)flag = true;

    	for(int j = 0; j < k; j++){
    		cin >> inp;
    		lang[inp].pb(i);
    	}

    }

    forn(i,1,m+1){
        forn(j,0,lang[i].size()){
            forn(k,j+1 , lang[i].size()){
                v[lang[i][j]].pb(lang[i][k]);
                v[lang[i][k]].pb(lang[i][j]);
            }
        }
    }

    int num = 0;

    forn(i,1,n+1){
        if(visited[i] == 0){
            num++;
            walk(i , num);
        }
    }

    if(!flag){
        cout << n << "\n";
        return;
    }

    cout << num -1 << "\n";

    

}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
