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

    string str; cin >> str;

    int n = str.size();

    int idx = 0;

    while(idx < n){
        if(str[idx] == '1'){
            break;
        }
        idx++;
    }

    int bk = n-1;

    while(bk >= 0){
        if(str[bk] == '1'){
            break;
        }

        bk--;
    }

    if(idx >= bk){
        cout << "0\n";
        return;
    }

    int ans = 0;
    forn(i,idx+1 , bk){
        if(str[i] == '0'){
            ans++;
        }
    }


    cout << ans << "\n";

    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
