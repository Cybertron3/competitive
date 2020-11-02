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
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;
std::vector<int> v[2000+1];
bool passed[2000+1];


int height(int u ){
	//if(!passed[u])return 0;
	

	int ans = 1;

	forn(i,0,v[u].size()){
		passed[v[u][i]] = true;
		ans = max(ans , 1 + height(v[u][i]) );
	}

	return ans;

}

void solve(){

	int n , inp; cin >> n;

	

	for(int i = 1; i< n+1; i++){
		cin >> inp;
		if(inp != -1){
			v[inp].pb(i);
		}
	}

	
	memset(passed , false , sizeof(passed));

	

	int len  = 0;

	forn(i,1,n+1){
		if(!passed[i]){
			len = max(len , height(i) );
		}

	}

	cout << len << endl;
    



}

int main(){
    SPEED;

    solve();

    return 0;
}
      
       
