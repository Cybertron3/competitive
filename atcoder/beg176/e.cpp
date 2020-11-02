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

const int N = 3e5 + 10 , mod =  1000000007;

void solve(){

    int h , c , m;
    cin >> h >> c >> m;

    int row[h+1] , col[c+1];
    // int mat[h+1][c+1];
    // memset(mat , 0 , sizeof(mat));
    memset(row , 0 , sizeof(row));
    memset(col , 0 , sizeof(col));

    int x , y;

    set<pii> s;

    forn(i,0,m){
        cin >> x >> y;
        // mat[x][y]++;
        s.insert({x,y});
        row[x]++;
        col[y]++;

    }

    ll maxc = 1 , maxr = 1 ;
    std::vector<int> ansr , ansc;

    forn(i,1,c+1){
        if(col[i] > col[maxc]){
            maxc = i;
            ansr.clear();
            ansr.pb(i);

        }else if(col[i] == col[maxc]){
            ansr.pb(i);
        }
    }



    forn(i,1,h+1){
        if(row[i] > row[maxr]){
            maxr = i;
            ansc.clear();
            ansr.pb(i);
        }else if(row[i] == row[maxr]){
            ansr.pb(i);
        }
    }

    ll ans = row[maxr] + col[maxc] , temp;

    if(s.find({maxr , maxc}) != s.end()){
        ans--;
    }

    forn(i,0,ansr.size()){
        forn(j,0,ansc.size()){
            temp = row[ansr[i]] + col[ansc[j]];
            if(s.find({ansr[i] , ansc[j]}) != s.end() ){
                temp--;
                ans = temp;
            }else{
                ans = temp;
                break;
            }
        }
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
    
    // cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
