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

    int n; cin >> n;
    string a , b;
    cin >> a ;
    cin >> b;

    std::vector<int> v[26];

    forn(i,0,n){
        v[b[i]-'a'].pb(i);
    }

    int present[26];
    memset(present , -1, sizeof(present));

    forn(i,0,n){
        present[a[i]-'a'] = i;
    }

    std::vector<int > ans[26];

    bool flag = true , used = false;

    for(int i = 25; i>= 0; i--){
        used = false;



        forn(j,0,(int)v[i].size()){
            if(a[v[i][j]] >= i + 'a' && present[i] != -1 ){
                if(a[v[i][j]] > i + 'a' ){
                    if(!used){
                        used = true;
                        ans[i].pb(present[i]);
                    }
                    ans[i].pb(v[i][j]);
                }
            }else{
                flag = false;
                break;
            }
        }
    }


    

    if(flag){

        int moves = 0;
        forn(i,0,26){
            if((int)ans[i].size() > 0)moves++;

        }

        cout << moves << "\n";

        for(int i = 25 ; i >= 0 ; i--){
            if(int(ans[i].size() > 0)){
                sort(ans[i].begin()  , ans[i].end());

                cout << ans[i].size() << " ";
                
                forn(j,0,(int)ans[i].size()){
                    cout << ans[i][j] << " ";
                }
                cout << "\n";
            }
        }
    
    }else{
        cout << "-1\n";
    }
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
