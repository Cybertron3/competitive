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

	int s , arr[3];

	cin >> s >> arr[0] >> arr[1] >> arr[2];

	if(s >= arr[0] + arr[1] + arr[2])cout << 1;
	else {
		if(arr[0] + arr[1] > s && arr[1] + arr[2] > s)cout << 3;
		else cout << 2;
	}  

	cout << endl;
    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
