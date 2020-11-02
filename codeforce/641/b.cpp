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
    int arr[n+1];
    for(int i = 1; i<=n ; i++){
        cin >> arr[i];
    }

    std::vector<int> dp(n+1 , 1);

    forn(i,1,n+1){
        int j  = i ;
        int counter = 1;
        while( j <=  n ){

            if(arr[j] > arr[i]){
                dp[j] = max(dp[j] , dp[i] + 1 );
            }

            j = j + i;
        }
    }


    sort(dp.begin() , dp.end());


    cout << dp[n] << "\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
