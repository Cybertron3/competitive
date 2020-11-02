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
    int i = 0, t;

    cin >> t;

    while(i++ < t){
    	cout << "Case #" << i << ": ";

    	string str; cin >> str;

    	int n = str.size();

    	std::vector<char> v;

    	int o = 0;

    	forn(i,0,n){
    		
    		while(o > str[i]-'0'){
    			v.pb(')');
    			o--;
   			}

   			while(o < str[i]-'0'){
   				v.pb('(');
   				o++;
   			}

   			v.pb(str[i]);	

    	}


    	while(o--){
    		v.pb(')');
    	}

    	forn(i,0,v.size()){
    		cout<<v[i];
    	}

    	cout << endl;

    }

    
    return 0;
}
      
       
