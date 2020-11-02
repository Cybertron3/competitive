//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
// AC
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

    int n , a[3];
    cin >> n >> a[0] >> a[1] >> a[2];

    sort(a , a + 3);

    int i , j , z;
    int ans = 0;

    for( i  = 0; i*a[0] <= n ; i++){
        for( j = 0; j*a[1] <= n - i*a[0] ; j++){
            z = n - i*a[0] - j*a[1];
            if(z%a[2] == 0){
                if(ans < i+j+(z/a[2]))ans = i + j + (z/a[2]);
            }
        }
    }

    cout << ans << "\n";

}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
