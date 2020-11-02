//PLUS ULTRA
//one who atops 

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
    int arr[n] ;
    for(int i = 0; i<n ; i++)cin >> arr[i];

    int m ,inp;
    cin >> m;
    bool pres[1000001];
    memset(pres ,  false , sizeof(pres));

    forn(i,0,m){
        cin >> inp;
        pres[inp] = true;

    }

    int ans = 0;
    bool in = false;

    forn(i,0,n){
        if(pres[arr[i]]){
            if(!in){
                ans++;
                in = true;
            }

        }else{
            in = false;
        }

    }


    cout << ans << "\n";
    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
