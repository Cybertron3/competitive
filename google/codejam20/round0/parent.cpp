//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define S second
#define F first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;



int main(){
    SPEED;

    int i = 0, t; cin >> t;

    while(i++ < t){
    	cout << "Case #" << i << ": ";
    	int n; cin >> n;

    	std::vector<pii> start ;

    	int s ; 
    	int end[n];

    	forn(i,0,n){
    		cin >> s >> end[i];
    		start.pb(mp(s,i));


    	}

    	sort(start.begin() , start.end());

    	char ans[n];
    	
    	ans[start[0].S] = 'C';
    	int cam = end[start[0].S], jam = 0;
    	bool flag = true;

    	forn(i,1,n){
    		if(start[i].F >= cam){
    			ans[start[i].S]  ='C';
    			cam = end[start[i].S];
    		}else if(start[i].F >= jam ){
    			ans[start[i].S] = 'J';
    			jam = end[start[i].S];
    		}else{
    			flag = false;
    			break;

    		}


    	}

    	if(flag){
    		forn(i,0,n){
    			cout << ans[i];
    		}
    	}else cout << "IMPOSSIBLE";

    	cout << endl;


    }
    

    
    return 0;
}
      
       
