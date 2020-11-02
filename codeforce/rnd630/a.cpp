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



int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	int a , b, c ,d;
    	cin >> a>> b >> c >>d;

    	int x , y;cin >> x >> y;

    	int x1 , x2 , y1 , y2;
    	cin >> x1 >> y1 >> x2 >> y2;

    	bool xflag = true , yflag = true;


    	if (x - a+b < x1 || x - a + b > x2){
    		xflag = false;
    		
    	}

    	if(a == b){
    			if(max(abs(x-x1) , abs(x2 - x)) < 1 && a != 0 )xflag= false;
    	}

    	if(y - c +d < y1 || y - c + d > y2){
    		yflag = false;
    		
    	}

    	if(c == d){
    			if(max(abs(y-y1) , abs(y2 - y)) < 1 && c!= 0)yflag= false;
    	}

    	if(xflag && yflag)cout << "YES" << endl;
    	else cout << "NO" << endl;





    }
    

    
    return 0;
}
      
       
