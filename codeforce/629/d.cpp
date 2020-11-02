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
    	int n; cin >> n;
    	int t[n];
    	forn(i,0,n)cin >> t[i];

    	bool same = true;

    	forn(i,0,n-1){
    		if(t[i] != t[i+1]){
    			same = false;
    			
    			break;
    		}
    	}

    	
    
    	if(!same){
    		int ans[n];
	    	ans[0] = 1;
	    	int k = 2;
	    	bool flag = false;
    		if(n % 2 == 1)flag = true;
			
			forn(i,1,n){
				if(t[i-1] == t[i] && flag ){
				
					flag = false;
					ans[i] = ans[i-1];
					
				}else{
					ans[i] = ans[i-1] ^ 1;
					

				}    		
			}

			if(flag && t[0] != t[n-1]){
	    		k = 3;
	    		ans[n-1] = 3;
	    	}

	    	cout << k << endl;

	    	forn(i,0,n){
	    		if(ans[i] == 0)cout << 2 << " ";
	    		else cout << ans[i] << " ";
	    	}

	    	cout << endl;




		}else{
			cout << 1 << endl;
			forn(i,0,n)cout << 1 << " ";
			cout << endl;
		}

    	


    }

    
    return 0;
}
      
       
