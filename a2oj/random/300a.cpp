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

    int n; cin  >> n;

    int inp;

    std::vector<int> neg , pos , zero;

    forn(i,0,n){
    	cin >> inp;
    	if(inp == 0)zero.pb(inp);
    	else if(inp > 0)pos.pb(inp);
    	else neg.pb(inp);

    }

    
     int st = 1;
   

    cout << 1 << " ";

    if(pos.size() == 0){
    	pos.pb(neg[0]);
    	pos.pb(neg[1]);

    		cout << neg[2] << " ";
    		st = 3;
    	
    }else{
    	
    		cout << neg[0] << " ";
    	
    }
    cout << endl;

    cout << pos.size() << " ";

    forn(i,0,pos.size()){
    	cout << pos[i] << " ";
    }
    cout << endl;

    cout << zero.size() + neg.size() - st << " ";

    forn(i,0,zero.size()){
    	cout << zero[i] <<" "; 
    }

   

	forn(i, st , neg.size()){
		cout << neg[i] << " ";
	}


    
    return 0;
}
      
       
