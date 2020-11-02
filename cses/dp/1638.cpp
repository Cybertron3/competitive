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


int add(int x , int y){
	return (x+y)%mod;
}



int main(){
    SPEED;

    int n; cin >> n;
    string str;

    ll arr[n][n];

    forn(i,0,n){
    	cin >> str;
    	forn(j,0,n){
    		if(str[j]=='*')arr[i][j] = 0;
    		else arr[i][j] = 1;
    	}
    }

    forn(i,0,n){
    	if(arr[i][0]==0){
    		forn(j,i+1,n){
    			arr[j][0] = 0;
    		}
    		break;
    	}
    }

    forn(i,0,n){
    	if(arr[0][i]==0){
    		forn(j,i+1,n){
    			arr[0][j] = 0;
    		}
    		break;
    	}
    }


    forn(i,1,n){
    	forn(j,1,n){
    		if(arr[i][j] != 0){
    			arr[i][j] = add( arr[i][j-1] , arr[i-1][j]) ;
    		}
    	}
    }

    // forn(i,0,n){
    // 	forn(j,0,n){
    // 		cout << arr[i][j] << " ";
    // 	}
    // 	cout << endl;
    // }

    cout << arr[n-1][n-1]<< endl;
    
    return 0;
}
      
       
