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

    int i = 0, t;
    cin >> t;

    while(i++ < t){
    	cout << "Case #" << i << ": " ;

    	int n; cin >> n;

    	int arr[n][n];

    	forn(i,0,n){
    		forn(j,0,n){
    			cin >> arr[i][j];
    		}
    	}

    	ll k  =0;

    	forn(i,0,n)k += arr[i][i];

    	int r = 0 , c = 0;

    	forn(i,0,n){

    		bool row[n+1] ;
    		memset(row , false , sizeof(row));
    		
    		forn(j,0,n){
    			if(row[arr[i][j]]){
    				r++;
    				break;
    			}

    			row[arr[i][j]] = true;

    		}
    	} 

    	forn(i,0,n){

    		bool col[n+1] ;
    		memset(col , false , sizeof(col));
    		
    		forn(j,0,n){
    			if(col[arr[j][i]]){
    				c++;
    				break;
    			}

    			col[arr[j][i]] = true;

    		}
    	}

    	cout << k << " " << r  << " " << c << endl; 





    }
    

    
    return 0;
}
      
       
