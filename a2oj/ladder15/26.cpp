//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
//AC
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

    int n , m , k;
    cin >> n >> m >> k;

    int arr[n];

    forn(i,0,n)cin >> arr[i];

    ll prefix[n+1];
    memset(prefix , 0 , sizeof(prefix));
    int l[m] , r[m] ,d[m];

    forn(i,0,m){
        cin >> l[i] >> r[i] >> d[i];
        l[i]--;

    }

    ll preftree[m+1];
    memset(preftree , 0 , sizeof(preftree));
    int x , y; //cin >> x >> y;
    forn(i,0,k){
        cin >> x >> y;
        x--; 
        preftree[x]++;
        preftree[y]--;


    }

    // forn(i,0,m){
    //     cout << preftree[i] << " ";
    // }
    // cout << endl;
    

    forn(i,1,m+1){
        preftree[i] +=  preftree[i-1];
    }

    // forn(i,0,m){
    //     cout << preftree[i] << " ";
    // }
    // cout << "\nprefix\n";



    forn(i,0,m){
        prefix[l[i]] += (d[i] * preftree[i]);
        prefix[r[i]] -= (d[i] * preftree[i]);
    }

    // forn(i,0,n){
    //     cout << prefix[i] << " ";
    // }

    forn(i,1,n+1){
        prefix[i] += prefix[i-1] ;
    }

    if(prefix[n] != 0){
        cout << "prefix galat hai "<< prefix[n] << "\n";
    }

    forn(i,0,n){
        cout << arr[i] + prefix[i] << " ";

    }


    // cout << "\n";
    // forn(i,0,n){
    //     cout << prefix[i] << " ";
    // }


    
    cout << "\n";

    


    
    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
