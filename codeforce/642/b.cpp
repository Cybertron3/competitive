//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 

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

    int n , k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n ; i++)
        cin >> arr[i];

    int b[n];
    forn(i,0,n)cin >> b[i];

    sort(arr , arr + n);
    sort(b , b+n);

    ll sum = 0 ;

    forn(i,0,n){
    	if(arr[i] < b[n-1-i] && k > 0){
    		sum += b[n-1-i];
    		k--;
    	}else{
    		sum += arr[i];

    	}

    }

    cout <<  sum << "\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
