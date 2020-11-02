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

    ll n , k; cin >> n >> k;
    ll arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    sort(arr , arr + n);

    std::vector<pii> v;

    // set<pii> S;

    int idj = 0;

    forn(i, 0 , n){
        ll t = arr[i];
        while(t <= arr[n-1]){
            v.pb({t , 0 });
            t += arr[i];
        }
        t -= arr[i];
        while(idj < v.size()){
            v[idj].ss = t;
            idj++;
        }

    }

    // forn(i,0,n){
    //     cout << v[i].ff << " " << v[i].ss << "\n";
    // }

    // cout << "v end\n";

    sort(v.begin() , v.end());

    forn(i,1,v.size()){
        if(v[i].ff == v[i-1].ff ){
            v.erase(v.begin() + i);
            i--;
        }
    }

    ll siz = (ll)v.size();

    ll pro = (k-1)/siz;
    

    ll ext = (k-1)%siz;

    // if(ext == 0){
    //     pro--;
    //     ext = siz-1;
    // }

    // cout << "pro " << pro << "\nv[ext].ss = " << v[ext].ss << "\n v[ext].ff " <<"\n";

    ll ans = pro * v[ext].ss + v[ext].ff ;

    cout << ans << "\n";



    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
