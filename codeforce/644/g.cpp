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

    int n , m, a , b;

    cin >> n>> m >> a >> b;

    int mat[n][m];
    memset(mat , 0 , sizeof(mat));

    int row[n];
    int col[m];
    memset(row , 0 , sizeof(row));
    memset(col , 0 , sizeof(col));

    forn(j,0,m){
        forn(i,0,n){
            if(col[j] < b && row[i] < a){
                mat[i][j] = 1;
                col[j]++;
                row[i]++;
                if(col[j] == b)break;
            }
        }
    }

    // forn(i,0,n){
    //     forn(j,0,m){
    //         cout << mat[i][j];
    //     }
    //     cout << "\n";
    // }
    
    
    bool flag = true;
    int sum = 0;
    forn(i,0,n){
        sum = 0;
        forn(j,0,m){
            sum += mat[i][j];
        }

        if(sum != a){
            // cout << "row " << i << "  , sum is  " << sum << "\n";
            cout << "NO\n";
            return;
        }
    }

    forn(j,0,m){
        sum = 0;
        forn(i,0,n){
            sum += mat[i][j];
        }
        if(sum != b){
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
    forn(i,0,n){
        forn(j,0,m){
            cout << mat[i][j];
        }
        cout << "\n";
    }
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
