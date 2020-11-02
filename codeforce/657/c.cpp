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

    int n, m ; cin >> n >> m;
    std::vector<pii> v;

    int ai , bi;

    forn(i,0,m){
        cin >> ai >> bi;

        v.pb({ai , bi});

    }

    sort(v.begin() , v.end());

    ll maxi = 0;

    forn(i,0,m){
        if(v[maxi].ss <= v[i].ss){
            maxi = i;
        }
    }

    ll cnt = n;

    ll ans = 0; 

    for(int i = m-1 ; i >= 0 ; i--){
        if(v[i].ff > v[maxi].ss ){
            ans += v[i].ff;
        }else if(v[i].ff == v[maxi].ss){
            if(i <= maxi){
                ans += v[maxi].ss * cnt;
                break;
            }else{
                ans += v[i].ff;
                    
            }

        }else{
            /*
                    5 0
                    5 0
                    5 0
                    5 0
                    2 6
            */

            if(i < maxi){
                ans += v[maxi].ss * cnt;
                break;
            }else if(i == maxi){
                ans += v[i].ff;
                cnt--;
                ans += v[i].ss * cnt;
                break;
            }else{

            }
               

        }



        cnt--;
            
            
            
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
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
