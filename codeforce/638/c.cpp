//PLUS ULTRA
//one who atops 

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
    string s;

    cin >> s;

    std::vector<char> str(n);

    forn(i,0,n){
    	str[i] = s[i];
    }
    sort(str.begin() , str.end());

    std::vector<char> v[k];

    int idx = (n-1) % k;


    for(int i = 0; i<n ; i++){
    	for( int j = 0; j < k && i < n ; j++){
    		v[j].pb(str[i]);
    		i++;

    	}
    	i--;
    }

    cout << idx << "\n";


    for(int j = 0; j < v[idx].size() ; j++){
    	cout << v[idx][j];
    }

    cout << "\n";
    
        


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
