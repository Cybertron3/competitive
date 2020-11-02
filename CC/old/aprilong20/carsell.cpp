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
    	int arr[n];
    	for(int i = 0; i< n; i++){
    		cin >> arr[i] ;
    	}

    	sort(arr , arr + n);
    	ll sum = 0;

    	for(int i = n-1 ; i >= 0; i--){
    		sum  = (sum  + max(0,arr[i] - (n- i - 1) ) ) % mod;
    	}

    	cout << sum  << endl;


    }


    

    
    return 0;
}
      
       
