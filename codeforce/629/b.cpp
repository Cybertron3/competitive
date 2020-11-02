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

int binomialCoeff(int n, int k) 
{ 
    int C[n + 1][k + 1]; 
    int i, j; 
  
    // Caculate value of Binomial Coefficient 
    // in bottom up manner 
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            // Base Cases 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
  
            // Calculate value using previously 
            // stored values 
            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
} 



int main(){
    SPEED;
    int t; cin >> t;

    while(t--){
    	int n , k; cin >> n >> k ;
    	int del = n-1 , o = n-1 ;
    	while( k > n - o ){
    		k = k - (n - o);
    		o--;
    		
    		
    	}

    	int s = n - k;
    	o--;



    	forn(i,0,n){
    		if(i==o || i== s)cout << 'b';
    		else cout << 'a' ;

    	}

    	cout << endl;

    	



    }

    
    return 0;
}
      
       
