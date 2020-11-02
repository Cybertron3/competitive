//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){
    
    int n ; cin >> n;

	int arr[n];
	forn(i,0,n)cin >> arr[i];

	int skills[n+1];

	memset(skills , 0 , sizeof(skills));

	int diff  = 0 , max = 0;

	forn(i,0,n){
		if(skills[arr[i]] == 0)diff++;
		skills[arr[i]]++;
		if(skills[arr[i]] > max)max = skills[arr[i]];
	}

	if(diff > max){
		cout << max << endl;

	}else if(diff < max){
		cout << diff << endl;
	}else{
		cout << max - 1 << endl;

	}



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
