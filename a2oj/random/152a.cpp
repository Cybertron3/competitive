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

    int n , m; cin >> n >> m;

    string str[n];

   	forn(i,0,n){
   		cin >> str[i];

   	}

   	int max , ans = 0;
    
    set<int> s;
    forn(j,0,m){
    	max = 0;
    	forn(i,0,n){
    		if(str[i][j] >  str[max][j]){
    			max = i;
    		}
    	}

    	forn(i,0,n){
    		if(str[i][j] == str[max][j]){
    			if(s.find(i) == s.end() ){
    				s.insert(i);
    				ans++;

    			}
    		}
    	}

    }


    cout << s.size() << endl;
    
    return 0;
}
      
       
