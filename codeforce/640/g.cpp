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
    if( n < 4){
    	cout << -1 << "\n";
    	return;
    }


    std::vector<int> v;
    v.pb(3); v.pb(1); v.pb(4); v.pb(2);

    forn(i,5,n+1){
    	if(i%2 == 1)v.insert(v.begin() , i);
    	else v.pb(i);
    }


    forn(i,0,v.size()){
    	cout << v[i] << " ";
    }

    cout << "\n";



    
    
        


}

int main(){
    SPEED;



    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
