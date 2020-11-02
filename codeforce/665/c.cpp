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


    
    bool ok = true;

    std::vector<pii> v(n);

    forn(i,0,n){
        v[i] = {arr[i] , i};
    }

    sort(v.begin() , v.end());

    int num = v[0].ff;

    forn(i,0,n){
        if( __gcd(v[i].ff , num) == num && __gcd(num , arr[i]) == num ){
            continue;
        }else if(arr[i] != v[i].ff ){
            ok = false;
            break;
        }
    }

    if(ok){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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
      
       
