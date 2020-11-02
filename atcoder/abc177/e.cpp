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

const int N = 1e6 + 10 , mod =  1000000007;

void solve(){

    int n; cin >> n;
    std::vector<int> arr(n);
    forn(i,0,n){
        cin >> arr[i];
        
    }

    int gd = arr[0];

    forn(i,1,n){
        gd = __gcd(gd , arr[i]);

    }
    if(gd != 1){
        cout << "not coprime\n";
        return;
    }

    ll lm = arr[0];

    forn(i,1,n){
        if(__gcd(lm , (ll)arr[i]) != 1){
            cout << "setwise coprime\n";
            return;

        }
        lm = lm * arr[i];
    }

    // for(int i = n-1; i >= 0; i--){
    //     // if(!flag)break;
    //     int tmp = arr[i];
    //     int j = 2;
    //     while(tmp > 1){
    //         if(tmp% j == 0 && pres[j]){
    //             // cout << tmp << " " << j << "\n";
    //             cout << "setwise coprime\n";
    //             return;
    //         }

    //         while(tmp%j==0){

    //             pres[j] = true;
    //             tmp = tmp / j;
    //         }
    //         j++;
    //     }
    // }


    
    cout << "pairwise coprime\n" ; 
  
    


    
    
        


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
      
       
