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






void solve(){

	ll n , x; cin >> n >> x;

	int arr[n];

	forn(i,0,n)cin >> arr[i];

	sort(arr , arr+n);

	ll sum = 0 , ans = 0 , i;

	for( i = n-1 ; i >= 0; i--){
		if(arr[i] >= x){
			sum += arr[i];

		}else{
			sum += arr[i];
			if((double)sum/(n-i) < (double)x){
				cout << n - i - 1 << endl;
				return;
			}
			ans++;
		}
	}


	cout << n - 1 - i << endl;



	
}



int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	solve();
    }
    

    
    return 0;
}
      
       
