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

    ll n; cin >> n;

    ll arr[n];

    forn(i,0,n)cin >> arr[i] ;

    ll pres[n+1];
    memset(pres , 0 , sizeof(pres));

    forn(i,0,n)pres[arr[i]]++;

    ll sum = 0;

    forn(i,1,n+1){
    	sum += (ll)(pres[i] * (pres[i] - 1 ))/2 ;
    }

    forn(k , 0 , n){
    	cout << (ll)sum - ((pres[arr[k]] * (pres[arr[k]] -1 ))/2 )+ (((pres[arr[k]] -1)*(pres[arr[k]]-2))/2) << endl ;
    }

    
    return 0;
}
      
       
