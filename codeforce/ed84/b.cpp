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
    	int n , k , inp; cin >> n;

    	std::vector<int> v[n];

    	bool flag[n+1] , dau[n+1];

    	memset(flag , true , sizeof(flag));
    	memset(dau , true , sizeof(dau));


    	int idx = 1;

    	forn(i,0,n){
    		cin >> k;

    		forn(j,0,k){
    			cin >> inp;
    			v[i].pb(inp);
    		}
    	}

    	// cout << " donewf tjhat" << endl;

    	int cnt = 0;
    


    	forn(i,0,n){

    		k = v[i].size();

    		forn(j,0,k){
    			if(flag[v[i][j]]){
    				flag[v[i][j]] = false;
    				cnt++;
    				dau[i] = false;
    				
    				break;
    			}

    		}

    	

    	}


    	if(cnt < n){
    		cout << "IMPROVE\n";

    		forn(i,0,n){
    			if(dau[i]){
    				cout << i+1 << " ";
    				break;
    			}
    		}

    		forn(i,1,n+1){
    			if(flag[i]){
    				cout << i << endl;
    				break;
    			}
    		}

    	}else cout << "OPTIMAL\n";





    }

    
    return 0;
}
      
       
