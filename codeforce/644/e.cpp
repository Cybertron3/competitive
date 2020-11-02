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

// bool rowchek(string arr[]  , int n , int r){
//     int j = 0;
//     while( j < n && arr[r][j] == '0'){
//         j++;
//     }

//     while( j < n && arr[r][j] == '1'){
//         j++;
//     }
//     if(j < n && arr[r][j] == '0'){
//         return false;
//     }


//     return true;
// }

// bool colchek(string arr[] , int n , int c){
//     int j = 0; 
//     while( j < n && arr[j][c] == '0'){
//         j++;
//     }

//     while( j < n && arr[j][c] == '1'){
//         j++;
//     }
//     if(j < n && arr[j][c] == '0'){
//         return false;
//     }


//     return true;
// }

void solve(){

    int n; cin >> n;
    string arr[n];

    forn(i,0,n){
        cin >> arr[i];
    }

    // bool flag  ;
    // forn(i,0,n){
    //     int j  = 0;
    //     flag = true;
    //     while( j < n && arr[i][j] == '0'){
    //         j++;
    //     }
    //     while(j<n && arr[i][j] == '1'){
    //         j++;
    //     }

    //     if(j < n && arr[i][j] == '0'){
    //         flag = false;
    //         // break;
    //     }

    //     if(!flag){
    //         cout << "NO\n";
    //         return;
    //     }

    // }

    // forn(j,0,n){
    //     int i  = 0;
    //     flag = true;
        

    //     if(!flag){
    //         cout << "NO\n";
    //         return;
    //     }

    // }

    // int flag = 2;

    nfor(i,n-1,0){
        nfor(j,n-1,0){
            if(i == n-1 || j == n-1)continue;

            if(arr[i][j] == '1'){
                if(arr[i+1][j] == '0' && arr[i][j+1] == '0'){
                    cout << "NO\n";
                    return;
                }
            }

        }
    }

    cout << "YES\n";
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
