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

    int r , g , b , w;
    cin >> r >> g >> b >> w;

    int cnt = 0;
    if(r % 2 == 1)cnt++;
    if(g%2 == 1)cnt++;
    if(b%2 )cnt++;


    if(cnt == 0 || cnt == 3){
        cout << "Yes\n";
    }else if(cnt == 1){
        if(w % 2 == 0){
            cout << "Yes\n";
        }else cout << "No\n";
    }else{
        if(r > 0 && g > 0 && b > 0 && w % 2 == 1){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    
    // if(cnt == 1){
    //     if( (r + g + b + w)%2 == 1){
    //         cout << "Yes\n";
    //     }else{
    //         cout << "No\n";
    //     }
    // }else if(cnt == 2){
    //     if(r > 0 && g > 0 && b > 0){
    //         r--;g--;b--;
    //         w+= 3;
    //         if( (r + g + b + w)%2 == 1){
    //             cout << "Yes\n";
    //         }else{
    //             cout << "No\n";
    //         }

    //     }else{
    //         cout << "No\n";
    //     }

    // }else{
    //     cout << "Yes\n";
    // }
    

    
    
        


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
      
       
