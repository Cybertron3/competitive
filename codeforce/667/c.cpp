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

    int n , x , y;

    cin >> n >> x >> y;

    if(y <= n){
        forn(i,0,n){
            cout << i + 1 << " ";
        }
        cout << "\n";
    }else{
        if(y < x + n){
            while(n--){
                cout << y <<" ";
                y--;
            }
            cout << "\n";
        }else{
            int diff = y-x;
            int step = diff;
            forn(i,2,diff+1){
                if(diff % i == 0 && diff / i <= n-1){
                    step = i;
                    break;

                }
            }

            std::vector<int> v;
            n = n - 2;
            v.pb(x);
            v.pb(y);

            // forn(i,0,sizeof(v)){
            //     cout << v[i] << " ";

            // }
            // cout << "\n";

            int tmp = x;
            x += step;
            while(x < y){
                v.pb(x);
                n--;
                x += step;
            }

            x = tmp - step;

            while(n > 0 && x > 0){
                v.pb(x);
                x -= step;
                n--;
            }

            x = y + step;
            while(n > 0){
                v.pb(x);
                n--;
                x += step;

            }

            // int siz = 
            forn(i,0,v.size()){
                cout << v[i] << " ";
            }
            cout << "\n";
        }






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
      
       
