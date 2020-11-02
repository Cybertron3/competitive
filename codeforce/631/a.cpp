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
    	int n , v; cin >> n >> v;

    	int arr[n];

    	forn(i,0,n)cin >> arr[i];

    	sort(arr ,arr+n);

    	int idx  = 1;

    	forn(i,0,n){
    		if(v==0 && idx < arr[i])break;
    		if(arr[i] == idx)idx++;
    		if(idx < arr[i]){
    			v--;
    			idx++;
    			i--;
    		}
    	}

    	idx += v;


    	cout << idx -1 << endl;

    }
    

    
    return 0;
}
      
       
