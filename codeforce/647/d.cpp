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

std::vector<int> blogs[500001];
int val[5*N ];
std::vector<int> number[5*N];

void solve(){

    int n , m;
    cin >> n >> m;
    int x, y;

    forn(i,0,m){
        cin >> x >> y;
        blogs[x].pb(y);
        blogs[y].pb(x);

    }   

    forn(i,1 , 1+ n){
        cin >> x;

        number[x].pb(i);
    }

    std::vector<int> prnt;

    forn(i,1,n+1){
        forn(j,0,number[i].size()){
            int ele = number[i][j];

            if(val[ele] + 1 !=  i){
                cout << "-1\n";
                return;
            }

            val[ele] = i;

            forn(k , 0 , blogs[ele].size()){
                if(val[blogs[ele][k]] == i - 1){
                    val[blogs[ele][k]] = i;
                }
            }

            prnt.pb(number[i][j]);



        }
    }

    forn(i,0,prnt.size()){
        cout << prnt[i] << " " ;
    }

    cout << "\n";


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
      
       
