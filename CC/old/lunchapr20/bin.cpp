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

const int N = 1e5 + 10 , mod =  998244353;

void solve(){

	int n , k; cin >> n >> k;
	std::vector<int> v[k];

	int arr[n]  , srt[n];
	bool visited[n] ;
	memset(visited , false , sizeof(visited));

	int idx = 0;

	forn(i,0,n){
		cin >> arr[i];
		v[idx].pb(arr[i]);
		idx = (idx + 1)%k;
		
	}

	forn(i,0,k){
		sort(v[i].begin() , v[i].end());
		idx = 0;
		for(int j = i ; j < n  ; j = j + k){
			srt[j] = v[i][idx];
			idx++;
		}
	}



	bool flag = true;

	forn(i,1,n){
		if(srt[i] < srt[i-1]){
			flag = false;
			break;
		}
	}


	if(flag)cout << "yes";
	else cout << "no";

	cout << endl;

    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
