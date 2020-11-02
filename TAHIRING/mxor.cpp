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

void func(int arr[]  , int n){
    int idx = 0;
    int maxidx, maxnum;
    for(int i = 31 ; i >= 0 ; i--){
        maxidx = idx;
        maxnum = INT_MIN;
        forn(j,idx , n){
            if((arr[j] & (1 << i) ) != 0 && arr[j] > maxnum){
                maxnum = arr[j] ;
                maxidx = j;
            }
        }

        if(maxnum == INT_MIN)continue;

        int temp = arr[idx] ;
        arr[idx] = arr[maxidx];
        arr[maxidx] = temp;

        maxidx = idx;
        forn(j,0,n){
            if(j != maxidx && (arr[j] & (1<<i)) != 0){
                arr[j] = arr[j] ^ arr[maxidx];
            }
        }
        idx++;
    }

    int ans = 0;
    forn(i,0,n){
        ans = ans ^ arr[i];
    }

    cout << ans << "\n";

}

void solve(){

    int n; cin >> n;
    int arr[n];

    forn(i,0,n)cin >> arr[i];

    func(arr , n);
    


    
    

    
    
        


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
      
       
