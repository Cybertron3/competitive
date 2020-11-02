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

    int arr[n+1];
    forn(i,1,n+1)cin >> arr[i];
    int key;
    int bpos[n+1];
    forn(i,1,n+1){
        cin >> key;
        bpos[key] = i;
    }

    int shift[n+1];


    forn(i,1,n+1){
        shift[arr[i]] = i - bpos[arr[i]] ;
        if(shift[arr[i]] < 0){
            shift[arr[i]] += n;
        }
    }

    int ans[n+1];
    memset(ans , 0 , sizeof(ans));
    forn(i,1,n+1){
        ans[shift[i]]++;
    }

    sort(ans , ans + (n+1));

    cout << ans[n] << "\n";
    

    
    
        


}

int main(){
    SPEED;

/*
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
