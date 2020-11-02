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

    int n , m; cin >> n >> m;

    int l[m+1];

    ll tot= 0 , curr;

    ll dpmax[m+1];
    memset(dpmax , 0, sizeof(dpmax));

    forn(i,1,m+1){
    	cin >> l[i];
    	tot +=  l[i];
    	curr = i + l[i] - 1;
    	if(dpmax[i-1] < curr)dpmax[i] = curr;
    	
    }


    if(tot < n || max > n ){
    	cout << -1 << endl;
    }else{

    	int idx[m];

    	forn(i,0,m){
    		idx[i] = i+1;
    	}


   

    	int end = m + l[m] - 1;
    	int blk = n - (m + l[m] - 1); 
    	ll sum = 0;

    	int idx = m;

    	while(end + sum < n){
    		
    		sum += l[idx] - 1;
    		idx--;

    	}

    	if(idx <= 0){
    		cout << "lafra ho gya";
    	}else{

    		

    	}



    }

    
    

    
    return 0;
}
      
       
