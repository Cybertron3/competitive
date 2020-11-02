//PLUS ULTRA
//one who atops 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

	int n , k; cin  >> n >> k;

	int arr[n];

	forn(i,0,n)cin >> arr[i];

	int pre[n] ;
	memset(pre , 0 , sizeof(pre));

	bool peak[n];
	memset(peak , false , sizeof(peak));

	forn(i,1,n-1){
		if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
			pre[i] = pre[i-1] + 1;
			peak[i] = true;
		}
		else pre[i] = pre[i-1]; 
	}

	pre[n-1] = pre[n-2];
    
    int ans = 0 , temp , idx = 0;
    
    forn(i,0,n-k+1){
    	temp = pre[i + k -1] - pre[i];
    	if(peak[i+k-1])temp--;
    	if(ans < temp  ){
    		idx = i;
    		ans = temp;
    	}
    	

    }

    cout << ans + 1 << " " << idx+1 << endl;




}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
