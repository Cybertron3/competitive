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

    int n , m; cin >> n >> m;
    int arr[n][m];

    bool row[n];
    bool col[m];

    memset(row , false ,sizeof(row));
    memset(col , false , sizeof(col));

    forn(i,0,n){
        forn(j,0,m){
            cin >> arr[i][j];

            if(arr[i][j] == 1){
                row[i] = true;
                col[j] = true;
            }
        }
    }

    int win = 0;

    forn(i,0,n){
        if(row[i])continue;
        forn(j,0,m){
            if(!col[j]){
                win++;
                col[j] = true;
                row[i] = true;
                break;
            }
        }
    }


    if(win % 2 == 0)cout << "Vivek\n";
    else cout << "Ashish\n";



    

    
    
        


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
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
