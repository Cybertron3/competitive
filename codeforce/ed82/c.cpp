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

    /*
        adjacent elements ke bech ek edge hai, 26 node hai.
        hame check krna hai ki kahi koi cycle toh nahi ban rha .
        agar ban rha hai to "NO". aur ek node ka 2 se jada edge nhi ho skta

        man lo 4 graph bante hai to graph G(i) ko ek leaf se dusre leaf tak
        print karana hai , phir alga graph ko bhi aise hi print krna hai

        SOLVED (maybe)

    */

    string str; cin >> str;

    int n = str.size();

    std::vector<int> v[26];


    forn(i,1,n){
        v[str[i-1]-'a'].pb(str[i] - 'a');
        v[str[i]-'a'].pb(str[i-1] - 'a');
    }


    forn(i,0,26){
        if(v[i].size() > 2 ){
            cout <<"NO\n";
        }
    }

    std::vector<char>ans;
    bool flag[26];
    memset(flag , false, sizeof(flag));

    forn(i,0,26){
        if(flag[i])continue;
        
        if(v[i].size() > 0){
            flag[i] = true;
            v[i]
        }

        forn(j,0,v[i].size()){
            
            if( !flag[v[i][j]] ){
                
                if(ans[0] == i + 'a' ){
                    ans.insert(ans.begin() ,'a' + v[i][j]);
                }
                else if( ans[(int)ans.size() - 1] == i + 'a'){
                    ans.pb( 'a' + v[i][j]);

                }else{
                    cout << "NO\n";
                    return;
                }
            }
        }
    
    }

    forn(i,0,26){
        if(!flag[i]){
            ans.pb(i+'a');
        }
    }


    cout << "YES\n";

    forn(i,0,n){
        cout << ans[i] ;
    }

    cout << "\n";

    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
