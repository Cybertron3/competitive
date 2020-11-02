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

    int n; cin >> n;
    int a[n];
    for(int i = 0; i<n ; i++){
        cin >> a[i];
    }

    int b[n];

    forn(i,0,n)cin >> b[i];

    // forn(i,0,n){
    //     int maxi = 0;
    //     forn(j,0,n-i){
    //         if(a[maxi] <= a[j] ){
    //             maxi = j;
    //         }
    //     }

    //     cout << a[maxi] << "\n";
    //     if(maxi == n-i-1)continue;

    //     if(b[maxi] != b[n-i-1]){
    //         int tmp = a[maxi];
    //         a[maxi] = a[n-i-1] ; 
    //         a[n-i-1] = tmp;
    //         b[maxi] = (b[maxi] +1 )% 2;
    //         b[n-i-1] = (b[n-i-1] + 1)% 2;
    //         continue; 
    //     }

    //     bool done = false;

    //     nfor(j,n-i-1,maxi){
    //         if(b[maxi] != b[j]){
    //             int tmp = a[maxi];
                
    //             a[maxi] = a[j];
    //             a[j] = a[n-i-1];
    //             a[n-i-1] = tmp;

    //             tmp = b[maxi];
    //             b[maxi] = (b[maxi]+1)% 2;
    //             b[j] = (b[j] + 1)% 2;
    //             b[n-i-1] = (b[n-i-1] + 1)% 2;

    //             done  = true;
    //             break;
    //         }


    //     }

    //     if(!done){
    //         cout << "NO\n";
    //         return;
    //     }



    // }


    // cout << "YES\n";




    for(int i = n-2 ; i >= 0; i--){
        if(a[i] <= a[i+1])continue;
        int op = 0 , j;
        bool found = false;
        for(j = i+1; j < n ; j++){
            if(a[j] > a[i])break;
            if(!found)found= (b[i] != b[j]);


        }

        if(!found){
            cout << "NO\n";
            return;
        }
        j--;
        int key = a[i] , nxt;
        for( ; j >=i ; j--){
            nxt = a[j];
            a[j] = key;
            key = nxt;
        }
    }
    
    cout << "YES\n";

    
    
        


}

int main(){
    SPEED;

/*
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
