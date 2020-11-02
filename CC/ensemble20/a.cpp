//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
#include<cstdio>
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

    int n , m; 
    cin >> n >> m;

    char str[n][m];

    forn(i,0,n){
        gets(str[i]);
    }

    int pt[n+1][m+1];
    memset(pt , 0 , sizeof(pt));

    int q; cin >> q;

    int a , b , x , y;

    while(q--){
        cin >> a >> b >> x >> y;
        a--;b--;x--;y--;

        forn(i,a,x+1){
            pt[i][b]++;
        }

        forn(i,a,x+1){
            pt[i][y+1]--;
        }


    }
    
    forn(i,0,n+1){
        forn(j,1,m+1){
            pt[i][j] = pt[i][j] + pt[i][j-1];
        }
    }

    int ch;

    forn(i,0,n){
        forn(j,0,m){
            if(pt[i][j]%2 ){
                ch = str[i][j] - '0';
                ch = (ch+1)%2;
                str[i][j] = (ch + '0');

            }

            // cout << str[i][j] ;
        }

        puts(str[i]);
    }



    
    

    
    
        


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
      
       
