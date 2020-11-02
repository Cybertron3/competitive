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
    	int n ; cin >>n ;

    	if(n==1)cout << -1 << endl;
    	else{
    		cout<<"2";
    		forn(i,0,n-1){
    			cout << "9";
    		}
    		cout << endl;
    	}

    }

    
    return 0;
}
      
       
