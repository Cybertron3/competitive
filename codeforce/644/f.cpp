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


char fun(string arr[] , int c , int n  , bool flag[]){
    int cnt[26];
    memset(cnt , 0 , sizeof(cnt));

    forn(i,0,n){
        if(!flag[i])return arr[i][c];
        cnt[arr[i][c] - 'a']++;
    }

    int maxi = 0;
    forn(i,0,26){
        if(cnt[i] > cnt[maxi])maxi = i;
    }

    return  maxi + 'a';

}

void solve(){

    int n , m; cin >> n >> m;

    string arr[n];

    forn(i,0,n){
        cin >> arr[i];
    }

    char ch = 'a';

    bool flag[n];
    memset(flag , true , sizeof(flag));

    bool pass = true;

    std::vector<char> v;

    // cout << "all ok";

    forn(i,0,m){
        ch = fun(arr , i , n , flag);

        pass = true;

        forn(j,0,n){
            if(arr[j][i] != ch ){
                if(flag[j]) {
                    flag[j] = false;
                }
                else{
                    cout << -1 <<"\n";
                    return;
                }
            }

        }

        v.pb(ch);

    }

    // cout << "wk done";

    forn(i,0,m){
        cout << v[i] ;
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
      
       
