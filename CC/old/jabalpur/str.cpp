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
    
    string s;

    cin >> s;
    int n = s.size();

    char tp;

    forn(i,0,n){
    	tp = s[i] - 'a';
    	tp = (tp+1) % 26;

    //	cout << (char)(tp + 'a') ;
    	
    	tp += 'a';

    	//cout << (char)tp;
    	if(tp == 'a' || tp == 'e' || tp == 'i' || tp == 'o' || tp == 'u')s[i] = tp + 'A' -'a';
    	else s[i] = tp ;

    }

    cout << s << endl;



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
