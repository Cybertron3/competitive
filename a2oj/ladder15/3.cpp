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

    int n ; cin >> n;
    int ans = 0;
    int x , y , z;

    forn(i,0,n){
    	cin >> x >> y >> z;

    	if(x+y+z > 1)ans++;
    }

    cout << ans << "\n";
    
        


}

int main(){
    SPEED;

    solve();




    return 0;
}
      
       
