//PLUS ULTRA
//escanor 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

	int n; cin >> n;
	ll arr[n];

	forn(i,0,n)cin >> arr[i];

	ll sum = 0;
	ll max = arr[0];

	forn(i,1,n){
		if( arr[i] * arr[i-1] < 0 ){
			sum += max;
			max = arr[i];
		}else{
			if(arr[i] > max)max = arr[i];
		}

	}

	sum += max;

	cout << sum << endl;
    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       

