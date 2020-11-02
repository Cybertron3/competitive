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



int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	int n; cin >> n;
    	int arr[n];
    	for(int i = 0; i < n ; i++){
    		cin >> arr[i];
    	}

    	int last = -6;
    	bool flag  =true;

    	for(int i = 0 ; i < n ; i++){
    		if(arr[i]==1){
    			if(i-last >= 6){
    				last = i;
    			}else {
    				flag = false;
    				break;
    			}
    		}
    	}

    	if(flag )cout << "YES" << endl;
    	else cout << "NO" << endl;





    }


    

    
    return 0;
}
      
       
