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

int fun(int x){

	int i = 2;

	int ans = 0;
	while(x>1){
		while(x%i==0){
			x = x / i;
			ans++;
		}
		i++;
	}

	return ans;
}


int main(){
    SPEED;

    int n; cin >> n;

    int arr[n]; 
    forn(i,0,n)cin >> arr[i];

    

    forn(i,0,n){
    	arr[i] = fun(arr[i]);

    }

    ll dp[n];
    dp[0] = arr[0];
    forn(i,1,n){
    	dp[i] = dp[i-1] + arr[i];
    }


    int q; cin >> q;

    int l , r;

    while(q--){
    	cin >> l >> r;

    	cout << dp[r] - dp[l] + arr[l] << endl; 

    }

    
    return 0;
}
      
       
