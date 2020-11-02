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

const int N = 2001 , mod =  1000000007;

std::vector<int> v[N];
int ht[N];

void walk(int u , int h){
    ht[u] = 1 + h;

    forn(i,0,(int)v[u].size()){
    
        walk(v[u][i]  , ht[u]);
       
    }

}

void solve(){

    int n; cin >> n;
    int pi;
    for(int i = 1; i<n+1 ; i++){
        cin >> pi;
        if(pi > 0)v[pi].pb(i);

    }

    forn(i,1,n+1){

        if(ht[i] == 0)walk( i , 0);
    }

    sort(ht , ht + N);

    cout << ht[N-1] << "\n";

    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
