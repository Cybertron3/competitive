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

    int n; cin >> n;
    
    int arr[n][n];

    int win[n] , draw[n] , loss[n];

    if(n % 2 == 0){
        FOR(i,0,n)draw[i] = 1;
    }

    int tmp = (n-1) /2 ;

    FOR(i,0,n){
        loss[i] = tmp;
        win[i] = tmp;
    }

    FOR(i,0,n){
        FOR(j,i+1 ,n){
            if(win[i] > 0  ){
                arr[i][j] = 1;
                arr[j][i] = -1;
                win[i]--;
                loss[j]--;
            }else if(draw[i] > 0){
                arr[i][j] = 0;
                arr[j][i] = 0;
                draw[i]--;
                draw[j]--;
            }else{
                arr[i][j] = -1;
                arr[j][i] = 1;
                loss[i]--;
                win[i]--;
            }
        }
    }

    FOR(i,0,n){
        FOR(j,i+1,n){
            cout << arr[i][j] << " ";
        }
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
      
       
