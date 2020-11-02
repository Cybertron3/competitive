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
    	int arr[n];

    	int maxi = 0;

    	forn(i,0,n){
    		cin >> arr[i];
    		if(arr[maxi] < arr[i])maxi = i;
    	}

    	int st=-1,ed=-1;
    	forn(i,0,n){
    		if(arr[i] == arr[maxi]){
    			st = i;
    			break;
    		}
    	}

    	nfor(i,n-1,0){
    		if(arr[i] == arr[maxi]){
    			ed = i;
    			break;
    		}
    	}

    	int len = ed - st + 1;
    	if(len > n/2){
    		cout << 0 << endl;
    	}else {

    		int pn = (n/2) - len + 1;
    		cout << pn << endl;
    	}





    }

    
    return 0;
}
      
       
