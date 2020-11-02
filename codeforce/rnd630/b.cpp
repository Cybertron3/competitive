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


ll gcd(ll n1, ll n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}




int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	int n; cin >> n;

    	int arr[n];

    	forn(i,0,n)cin >> arr[i];

    	

    	int hcf[12] ;
    	memset(hcf , 0 , sizeof(hcf));

    	hcf[1] = arr[0];


    	int  m = 1;

    	int ans[n];
    	ans[0] = 1;

    	forn(i , 1 , n){
    		m = 1;
    		while(m < 12 && hcf[m] != 0 && gcd(hcf[m] ,arr[i] ) == 1){
    			m++;
    		}

    		if(m >= 12){
    			cout << "lafra ho gya";

    		}else if(hcf[m] == 0){
    			hcf[m] = arr[i];
    			ans[i] = m;
    			

    		}else{
    			
    			ans[i] = m;
    			hcf[m] = gcd(hcf[m] , arr[i]);
    		}



    	}



    	forn(i,0,n){
    		cout << ans[i] << " ";
    	}

    	cout << endl;


    }
    

    
    return 0;
}
      
       
