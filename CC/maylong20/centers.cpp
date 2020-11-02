//PLUS ULTRA
//one who sits atop all the clan : Lion's Sin Escanor 

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

    int n, q; cin >> n >> q;

    string str; cin >> str;

    int arr[26];
    memset(arr  , 0 , sizeof(arr));

    for(int i = 0;i < n; i++){
    	arr[str[i] - 'a']++;

    }

    
    int sum = 0 , c;


    while(q--){
    	cin >> c;
    	
    	sum  = 0;
    	for(int i = 0; i < 26 ; i++){
    		sum += max(0 , arr[i] - c);
    	}

    	cout << sum << "\n";
    }


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
