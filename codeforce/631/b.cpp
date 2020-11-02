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

bool fun(int arr[] , int st , int n){
	bool flag[n+1];
	memset(flag , false , sizeof(flag));
	forn(i,st , n){
		if(arr[i] > n-st)return false;
		if(flag[arr[i]])return false;

		flag[arr[i]] = true;

	}


	return true;
}


int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	int n ; cin >> n;

    	int arr[n];
    	forn(i,0,n)cin >> arr[i];

    	bool flag[n];
    	memset(flag , false , sizeof(flag));

    	bool rep = false;

    	int ans = 0;
    	std::vector<pii> v;

    	int max = arr[0];

    	forn(i,0,n){
    		if(flag[arr[i]]){
    			rep = true;
    			break;
    		}

    		flag[arr[i]] = true;

    		if(arr[i] > max)max = arr[i];

    		if(max == i+1){

    			if(fun(arr , i+1 , n)){
	    			ans++;
	    			v.pb(mp(i+1 , n - i- 1));

	    		}
    		}
				



    	}

    	cout << ans << endl;

    	forn(i,0,ans){
    		cout << v[i].first << " " << v[i].second << endl;
    	}



    }
    

    
    return 0;
}
      
       
