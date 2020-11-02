//PLUS ULTRA
//one who atops 

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

	int n, k;
	cin >> n >> k;

	int sum[2*k + 10];
	memset(sum , 0 , sizeof(sum));

	forn(i,0,n/2){
		sum[arr[i] + arr[n-i-1]]++;

	}

	int max = 1;

	forn(i,2,2*k + 2 ){
		if(sum[max] <= sum[i])max = i;

	}

	cout << 
    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
