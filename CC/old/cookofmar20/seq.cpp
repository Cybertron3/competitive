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

ll powerof2[50];


const int N = 1e5 + 10 , mod =  1000000007;


ll mul(ll x , ll y){
	return (x*y)%mod;
}

void precal(){
	ll x = 1;

	forn(i,0,50){
		powerof2[i] = x;
		x = mul(x,2);
		
	}
}

ll fun(ll x){
	int cnt = 0;
	while(x>0){
		if(x%2 == 1)cnt++;
		x = x /2;
	}

	//cout << "count of one is " << cnt << endl;

	return powerof2[cnt];
}



int main(){
    SPEED;

    precal();

    int t; cin >> t;

    while(t--){
    	int n; cin >> n;

    	ll arr[n];
    	forn(i,0,n)cin >> arr[i];

    	ll ans = 1 ;
    	bool flag = true;

    	forn(i,1,n){

    		if(arr[i] != (arr[i] | arr[i-1] )){
    			flag = false;
    			break;
    		}
    			
    		ans = mul(ans,  fun(arr[i-1])); 
    		
    		
    	}

    	if(flag)cout << ans << endl;
    	else cout << "0" << endl;




    }

    
    return 0;
}
      
       
