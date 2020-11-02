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
    std::vector<int> hor , ver;
    map<pii , int> common;
    int x , y;
    ll ans = 0;
    forn(i,0,n){
        cin >> x >> y;
        common[{x,y}]++;
        hor.pb(x);
        ver.pb(y);
    }

    // cout << "hor is " << hor.size() << "\n";
    // cout << "ver is " << ver.size() << "\n";

    sort(hor.begin()  , hor.end());
    sort(ver.begin() , ver.end());

    int siz = hor.size() ;
    ll cnt = 0;
    forn(i,0,siz){
        cnt = 0;
        while(i+1 < siz){
            if(hor[i] == hor[i+1]){
                cnt++;
            }else break;

            i++;
        }
        // cout << "cnt =  " << cnt << "\n";
        ans += ((cnt*(cnt+1))/2) ;
    }
    // cout << ans << "\n";
    siz = ver.size();

    forn(i,0,siz){
        cnt = 0;
        while(i+1 < siz){
            if(ver[i] == ver[i+1]){
                cnt++;
            }else break;

            i++;
        }
        // cout << "cnt =  " << cnt << "\n";
        ans += ((cnt*(cnt+1))/2) ;
    }

    for(auto i = common.begin() ; i != common.end(); i++){
        ll tmp =(ll) i->second ;
        ans = ans - ((tmp-1)*tmp)/2 ;
    }


    cout << ans << "\n";
    

    

    
        


    
    


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
      
       
