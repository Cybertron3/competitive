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

    int n ;
    cin >> n;
    int arr[n];
    forn(i,0,n)cin >> arr[i];
    
    bool pres[n+1];
    memset(pres , false , sizeof(pres));



    ll sum = 0;

    forn(i,0,n){
    	sum = arr[i];
    	forn(j,i+1,n){
    		sum+=arr[j];
    		if(sum <= n)pres[sum] = true;
    		else break;
    	}
    }

    sum = 0;

    forn(i,0,n){
    	if(pres[arr[i]])sum++;
    }

    cout << sum << "\n";
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
