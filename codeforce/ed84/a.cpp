//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;



int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	ll n,k; cin >> n >> k;

    	if(n%2 == 0 ){
    		if(k % 2 == 0 && (ll)k*k <= n){
    			cout << "YES" << endl;
    		}else cout << "NO" << endl;
    	}else if(n%2 == 1 && k % 2 == 0){
    		cout << "NO" << endl;
    	}else {
    		if( k*k <= n ){	
    			cout << "YES" << endl;
    			
    		}else cout << "NO" << endl;
    	}



    	// ll sum =(ll) k*k;
    	// ll i = 1 , j = (2*k) + 1;

    	// if(n%2 == 0 ){
    	// 	if(k % 2 == 0 && (ll)k*k <= n){
    	// 		while(sum < n){
    	// 			sum = sum - i + j;
    	// 			i +=2 ;
    	// 			j += 2;
    	// 		}
    	// 		i = i -2; j = j -2;

    	// 		if (sum == n){
    	// 			cout << "YES" << endl;
    	// 		}else if(sum - n < i)
    	// 		cout << "NO" << endl;

    	// 	}else cout << "NO" << endl;
    	// }else if(n%2 == 1 && k % 2 == 0){
    	// 	cout << "NO" << endl;
    	// }else {
    	// 	if( k*k <= n ){
    	// 		while(sum < n){
    	// 			sum = sum - i + j;
    	// 		}
    	// 		if (sum == n){
    	// 			cout << "YES" << endl;
    	// 		}else cout << "NO" << endl;
    	// 	}else cout << "NO" << endl;
    	// }

    }

    
    return 0;
}
      
       
