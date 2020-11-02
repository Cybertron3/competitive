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

ll add(ll x , ll y){
	return (x+y)%mod;
}

int main(){
    SPEED;

    int n; cin >> n;

    ll arr[max(n , 6) + 1];

    memset(arr , 0,sizeof(arr));

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    arr[4] = 8;
    arr[5] = 16;
    arr[6] = 32;

    forn(i,7,n+1){

    	forn(j,1,7){
    		arr[i] = add(arr[i] , arr[i-j]);
    	}
    	//arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4]+ arr[i-5] + arr[i-6];


    }
   
	cout << arr[n] << endl;    
    return 0;
}
      
       
