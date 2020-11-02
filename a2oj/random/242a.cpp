//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define S second
#define F first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;



int main(){
    SPEED;
	
	int x , y , a , b;
	cin >> x >> y >> a >> b;

	std::vector<pii> v;

	forn(i,a,x+1){
		forn(j,b,min(y+1,i)){
			v.pb(mp(i,j));
		}
	}

	cout << v.size() << endl;
	sort(v.begin() , v.end());

	forn(i,0,v.size()){
		cout << v[i].F << " " << v[i].S << endl;
	}



    
    return 0;
}
      
       
