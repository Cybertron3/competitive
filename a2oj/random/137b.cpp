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

    int n; cin >> n;

    int inp, ans = n;

    bool arr[n+1];
    memset(arr  , false, sizeof(arr));
    
    forn(i,0,n){
    	cin >> inp;
    	if(inp <= n && !arr[inp] ){
    		arr[inp] = true;
    		ans--;
    	}
    }

    cout << ans << endl;
    

    
    return 0;
}
      
       
