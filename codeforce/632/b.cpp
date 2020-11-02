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

    int t; cin >> t;

    while(t--){
    	int n; cin >> n;
    	int a[n] , b[n];

    	bool plus[n] , minus[n];

    	memset(plus , false , sizeof(plus));
    	memset(minus , false , sizeof(minus));

    	forn(i,0,n)cin >> a[i];
    	forn(i,0,n)cin >> b[i];


    	forn(i,1,n){
    		if(a[i-1] == -1){
    			plus[i] = plus[i-1];
    			minus[i] = true;
    		}
    		else if(a[i-1] == 1){
    			plus[i] = true;
    			minus[i] = minus[i-1];
    		}else{
    			plus[i] = plus[i-1];
    			minus[i] = minus[i-1];
    		}
    	}

    	bool flag = true;

    	for(int i = n-1; i >= 0; i--){
    		if(a[i] > b[i] && minus[i])continue;
    		else if(a[i] == b[i])continue;
    		else if(a[i] < b[i] && plus[i])continue;
    		else{

    		 flag = false;
    			break;
    		}

    	}

    	if(flag )cout << "YES" << endl;
    	else cout << "NO"<< endl;


    }
    

    
    return 0;
}
      
       
