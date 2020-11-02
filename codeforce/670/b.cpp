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
    std::vector<int> arr(n);
    forn(i,0,n){
        cin >> arr[i];
        
    }

    std::vector<ll> ans;

    // std::vector<int> plus , minus;

    // bool zer0 = false;

    // forn(i,0,n){
    //     if(arr[i] < 0)minus.pb(arr[i]);
    //     else if(arr[i] > 0)plus.pb(arr[i]);
    //     else zer0 = true;
    // }

    // if(zer0)ans.pb(0);

    // if(!minus.empty())sort(minus.begin() , minus.end());
    // if(!plus.empty())sort(plus.begin() , plus.end() , greater<>());
    
  

    // forn(i,0,6){
    //     if(plus.size() >= i && minus.size() >= 5-i){
    //         ll tmp = 1;
    //         if((5-i)%2 == 0){
    //             forn(j,0,5-i){
    //                 tmp = tmp * minus[j];
    //             }

    //         }else{
    //             tmp = minus[minus.size() - 1];

    //             forn(j,0,5-i-1){
    //                 tmp = tmp * minus[j];
    //             }
    //         }

    //         // cout << plus.size() - i << "\n";
            
    //         for(int j = 0 ; j < i ; j++){
    //             tmp = tmp * plus[j];
    //         }
           

    //         ans.pb(tmp);

    //     }


    // }


    // if(!ans.empty())sort(ans.begin() , ans.end());

    // cout << ans[ans.size() - 1] << "\n";
    
    

    sort(arr.begin() , arr.end());

    ll tmp = 1;
    forn(i,0,5){
        tmp *= arr[i];
    }
    ans.pb(tmp);
    
    for(int i = n - 5; i < n ; i++){
        int idx = i;
        tmp = 1;
        for(int j = 0; j< 5 ; j++){
            tmp = tmp*arr[idx];
            idx = (idx+1)%n;

        } 
        ans.pb(tmp);

    }
    
    sort(ans.begin() , ans.end());

    cout << ans.back() << "\n";


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
      
       
