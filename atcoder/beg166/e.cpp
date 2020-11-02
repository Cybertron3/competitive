//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    int n; cin >> n;
    ll arr[n]  , inp;

    map<int , int> mp;


    for(int i = 0; i<n ; i++){
		cin >> arr[i];
		
    }

    ll ans  = 0;

    ll t= n-1 - arr[n-1] , x ;
    mp[t]++;

    for(int i = n-2; i>= 0 ; i--){
    	x = arr[i] + i ;

    	if(mp.find(x) != mp.end()){
    		ans += mp[x];
    	} 

    	t = i - arr[i];
    	mp[t]++;

    }

    cout << ans << "\n";
    

 
        


}

int main(){
    SPEED;

   solve();


    return 0;
}
      
       
