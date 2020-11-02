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

    ll n; cin >> n;

    ll sum = 0;

    if(n==1)cout << 0 ;
    else{
    	ll tmp = 3;
    	ll stp = 1;

    	while(tmp <= n){
    		sum += (2*tmp + 2*(tmp - 2))*stp;
    		tmp += 2;
    		stp++;
    	}

    	cout << sum ;


    }

    
    
        

    cout << "\n";

}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
