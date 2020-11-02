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

	int n , k; cin >> n >> k;

	bool safe[101];
	memset(safe  , true , sizeof(safe));
	int d , inp;

	forn(i,0,k){
		 cin >> d;
		forn(j,0,d){
			cin >> inp;
			safe[inp] = false; 

		}
	}

	int cnt = 0;

	forn(i,1,n+1){

		if(safe[i])cnt++;

	}

	cout << cnt << "\n";
    
        


}

int main(){
    SPEED;

    solve();


    return 0;
}
      
       
