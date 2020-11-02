//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

int funx(string str , int x  ){
	int siz = str.size();
	int i = x;
	while(i< siz && (str[i] == 'L' || str[i] == 'R')){
		i++;
	}
	return i-1;
}
int funy(string str , int x  ){
	int siz = str.size();
	int i = x;
	while(i< siz && (str[i] == 'U' || str[i] == 'D')){
		i++;
	}
	return i-1;
}

int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	int n; cin >> n;

    	string str; cin >> str;
    	int x = 0, y = 0;

    	forn(i,0,n){
    		if(str[i] == 'L'){
    			i = funx(str , i);
    			x--;
    		}else if(str[i] == 'R'){
    			i = funx(str , i );
    			x++;
    		}else if(str[i] == 'U'){
    			i = funy(str , i  );
    			y++;
    		}else {
    			i = funy(str  , i);
    			y--;
    		}
    	}

    	cout << x << " " << y << endl;


    }

    
    return 0;
}
      
       
