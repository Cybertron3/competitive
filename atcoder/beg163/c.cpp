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

	int n; cin >> n;

	int arr[n+1] , inp;
	memset(arr, 0 , sizeof(arr));

	forn(i,1,n){
		cin >> inp;
		arr[inp]++;
	}
    
    forn(i, 1 , n+1){
    	cout << arr[i] << endl;

    }



}

int main(){
    SPEED;

   solve();

    return 0;
}
      
       
