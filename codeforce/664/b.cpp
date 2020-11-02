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

    int n , m , sx  , sy;
    cin >> n >>m >> sx >> sy;

    int x = sx , y = sy;

    cout << x << " " << y << "\n";
    x = 1;
    while(x <= n){
        if(x == sx && y == sy){
            x++;
            continue;
        }

        cout << x << " " << y << "\n";
        x++;
    }
     y--;
    bool up = true;
    x = n;
    while(y >= 1){
        if(up){
        
            while(x >= 1){
                cout << x << " " << y << "\n";
                x--;
            }
            up = false;
            x = 1;
        }
        else{
            
            while(x <= n){
                cout << x << " " << y << "\n";
                x++;
            }
            up = true;
            x = n;
        }
       y--;

    }

    y = sy+1;
    while(y <= m){
        if(up){
        
            while(x >= 1){
                cout << x << " " << y << "\n";
                x--;
            }
            up = false;
            x = 1;
        }
        else{
            
            while(x <= n){
                cout << x << " " << y << "\n";
                x++;
            }
            up = true;
            x = n;
        }
       y++;

    }


    // while(y == sy && x != n ){
    //     cout << x << " " << y << "\n";
    //     x++;
    // }

 

    // while(x == n && y != 1){
    //     cout << x << " " << y << "\n";
    //     y--;

    // }
    // cout << x << " " << y << "\n";


    // bool up = true;

    // while(x != sx || y != sy){
    //     if(up){
    //         x--;
    //         if(x == sx && y == sy)break;
    //         if(x != 0)cout << x << " " << y << "\n";
    //         else{
    //             y++;x++;
    //             if(x == sx && y == sy)break;

    //             cout << x << " " << y << "\n";
    //             up = false;
    //         }
    //     }else{
    //         x++;
    //         if(x == sx && y == sy)break;
    //         if(x != n){
    //             cout << x << " " << y << "\n";
    //         }else{
    //             x--;y++;
    //             if(x == sx && y == sy)break;

    //             cout << x << " " << y << "\n";
    //             up = true;
    //         }

    //     }
    // }

    // y++;
    // if(up)x++;
    // else x--;

    // cout << x << " " << y << "\n";

    // while(x != n-1 || y != m){
    //     if(up){
    //         x--;
    //         if(x == n-1 && y == m)break;
    //         if(x != 0)cout << x << " " << y << "\n";
    //         else{
    //             y++;x++;
    //             if(x == n-1 && y == m)break;

    //             cout << x << " " << y << "\n";
    //             up = false;
    //         }
    //     }else{
    //         x++;
    //         if(x == n-1 && y == m)break;
    //         if(x != n){
    //             cout << x << " " << y << "\n";
    //         }else{
    //             x--;y++;
    //             if(x == n-1 && y == m)break;

    //             cout << x << " " << y << "\n";
    //             up = true;
    //         }

    //     }
    // }

    // cout << x << " " << y << "\n";
    // x++;
    // cout << x << " " << y << "\n";

    // while(sy != y){
    //     y--;
    //     cout << x << " " << y << "\n";
    
    // }

    // while







    


    
    

    
    
        


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
      
       
