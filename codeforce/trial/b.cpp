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

    int a , b , c , d;

    cin >> a >> b >> c >>d;

    if(a==c){
    	if(a == b + d)cout << "YES\n";
    	else cout << "NO\n";

    }else if(a == d){
    	if(a == b + c)cout << "YES\n";
    	else cout << "NO\n";

    }else{
    	if(b == c){
    		if(b == a + d)cout << "YES\n";
    		else cout << "NO\n";

    	}else if(b == d){
    		if(b == a + c)cout << "YES\n";
    		else cout << "NO\n";

    	}else{
    		cout << "NO\n";

    	}
    }


    
    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
