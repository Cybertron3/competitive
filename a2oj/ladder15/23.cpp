//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
//AC
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

    int n , k; cin >> n>> k;
    int arr[n];
    forn(i,0,n)cin >> arr[i];

    ll sum = 0;
    forn(i,0,k){
        sum += arr[i];
    }

    int idj = 0;
    ll blockSum = sum;

    forn(i,k,n){
        blockSum = blockSum + arr[i] - arr[i-k] ;
        if(sum > blockSum ){
            idj = i - k + 1;
            sum = blockSum ;
        }
    }

    cout << idj + 1 << "\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
