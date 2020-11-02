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

    int n , k;

    cin >> n >> k;

    if(k > n){
    	cout << "NO\n";
    	return;
    }

    if( k % 2 == n % 2  ){
    	cout << "YES\n";
    	

    	forn(i,1,k){
    		cout << "1 ";
    	}


    	cout << n - (k-1) << "\n";

    }else if(k % 2 == 1 && n % 2 == 0){
    	if(2*k <= n){
    		cout << "YES\n";
    		forn(i,1,k){
    			cout << "2 ";
    		}

    		cout << n - (k-1)*2 << "\n";

    	}else cout << "NO\n";

    }
    // else if(k % 2 == 0 && n % 2 == 0){
    // 	if( k < n)cout << "NO\n";
    // 	else{
    // 		cout << "YES\n";
    // 		forn(i,1,k){
    // 			cout << "1 ";
    		
    // 		}

    // 		cout << n - (k-1) << "\n";
    // 	}



    // }
    else{
    	cout << "NO\n";
    }



    
    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
