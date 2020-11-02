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
	int x , y; cin >> x >> y;

	string str; cin >> str;
	int n = str.size();

	int t;

	for( t = 0 ; t < n ; t++){
		if(abs(x) + abs(y) <= t){
			cout << t << "\n";
			return;
		}
		if(str[t] == 'N')y++;
		else if(str[t] == 'S')y--;
		else if(str[t] == 'E')x++;
		else x--;

 
		// cout << "no ans " << t << " " << x << " " << y << "\n";
	}

	if(abs(x) + abs(y) <= t){
			cout << t << "\n";
			return;
	}

	cout << "IMPOSSIBLE\n";

    



}

int main(){
    SPEED;

    int  t = 1 , T; cin >> T;
    while(t <= T) {
    	cout << "Case #" << t << ": ";
    	solve();
    	t++;
    }

    return 0;
}
      
       
