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

void solve(){

    string s; cin >> s;
    int n = s.size();
    int x; cin >> x;

    std::vector<char> v(n , '1');

    // forn(i,0,x){
    //     v[i+x] = s[i];
    // }

    // rev(i,n-1,n-x){
    //     if(v[i-x] == '#'){
    //         v[i-x] = s[i];
    //     }else if(v[i-x] != s[i]){
    //         cout << "-1\n";
    //         return;
    //     }
    // }

    forn(i,0,n){
        if(s[i] != '0')continue;
        if( i -x >= 0){   
            v[i-x] = '0';
        }

        if(i+x < n){
            v[i+x ] = '0';
        }
    }

    forn(i,0,n){
        if(s[i]!='1')continue;
        bool ok = false;
        if(i-x >= 0){
            if(v[i-x] == '1'){
                ok = true;
            }
        }
        if(i+x < n){
            if(v[i+x] == '1'  ){
                ok = true;
            }
        }

        if(!ok){
            cout << "-1\n";
            return ;
        }
    }
    
    forn(i,0,n){
        if(v[i])
        cout << v[i] ;
    }

    cout << "\n";
    
    
        


    
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
      
       
