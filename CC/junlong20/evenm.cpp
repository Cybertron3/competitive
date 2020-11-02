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

    int n ; cin >> n;

    int mat[n][n];

    mat[0][0] = 1;

    int num = 2;
    forn(k , 2 , 1+n){
        forn(i , 0 , k){
            mat[i][k-1] = num;
            num++;
        }

        num--;
        // cout << num << "\n";

        nfor(j,k-1 , 0){
            mat[k-1][j] = num;
            num++;
        }
    }


    forn(i,0,n){
        forn(j,0,n){
            cout << mat[i][j] << " ";
        }

        cout << "\n";
    }




}

int main(){
    SPEED;


    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
