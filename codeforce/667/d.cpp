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

    ll n ; cin >> n;
    int s ; cin >> s;

    ll tmp = n;
    std::vector<int> arr;
    while(tmp > 0){
        arr.pb(tmp%10);
        tmp /= 10;
    }
    arr.pb(0);

    int siz = arr.size();

    int sum = 0;
    forn(i,0,siz){
        sum+= arr[i];

    }

    if(sum <= s){
        cout << "0\n";
        return;
    }

    sum -= s;


    forn(i,0,siz-1){
        if(sum > 0){
        //     sum = 0;
        //     arr[i] = arr[i] - sum;

        // }else{
            sum -= arr[i];
            arr[i] = 0;
            arr[i+1]++;
            sum++;
        }
    }

    ll ans = 0;

    rev(i,siz-1,0){
        ans = ans * 10 + arr[i]; 
    }

    cout << ans - n << "\n";
    


    
    

    
    
        


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
      
       
