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

    	int a[n];

    	forn(i,0,n){
    		cin >> a[i];
    	}

    	int b[n];

    	forn(i,0,n){
    		cin >> b[i];
    	}


    	sort(a , a+n);
    	sort(b , b+n);

    	if(a[n-1] == b[n-1])cout << "NO";
    	else cout << "YES";

    	cout << endl;


    }
    

    
    return 0;
}
      
       
