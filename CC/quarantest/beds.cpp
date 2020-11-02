//PLUS ULTRA
//one who atops 

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
    int arr[n][n];
   

    forn(i,0,n){
    	forn(j,0,n){
    		cin >> arr[i][j];
    	}

    }

    bool flag = true;

    forn(i,0,n){
    	forn(j,0,n){
    		if(i!=0 && arr[i-1][j]*arr[i][j] != 0){
    			flag = false;
    			break;
    		}
    		if(j!= 0 && arr[i][j-1] * arr[i][j] != 0){
    			flag = false;
    			break;
    		}
    	}
    }

    if(flag)cout << "SAFE\n";
    else cout << "UNSAFE\n";


    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
