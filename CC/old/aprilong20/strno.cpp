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


ll power(ll k){
	ll ans = 1;
	while(k--){
		ans *= 2;
	}

	return ans;
}


int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	ll x , k;
    	cin >> x >> k;

        ll tmp;

        int numoffact = 0; 

        //cout  << tmp << endl;

    	// while(tmp < x){
     //        tmp *= 2;
     //      //  cout << tmp << endl;
     //    }

     //    if(tmp == x){
        	tmp = 2;
        	while(x>0 && tmp <= sqrt(x) + 1){
        		while(x % tmp == 0){
        			numoffact++;
        			x /= tmp;
        		}
        		tmp++;
        	}

            if(x>2)numoffact++;


        	if(numoffact >= k)cout << 1 << endl;
        	else cout << 0 << endl;

        // }
        // else cout << 0 << endl;






    }
    

    
    return 0;
}
      
       
