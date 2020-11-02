//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 

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

    ll n , a , b , c;

    cin >> n >> a >> b >> c;

    string str;

    std::vector<char> v;

    bool flag = true;

    forn(i,0,n){
    	cin >> str;
    	if(str[0] == 'A'){
    		if(str[1] == 'B'){
    			//AB
    			if(a > b){
    				v.pb('B');
    				b++; a--;

    			}else{
    				v.pb('A');
    				a++; b--;
    			}

    		}else{
    			//AC
    			if(a > c){
    				v.pb('C');
    				c++; a--;
    			}else{
    				v.pb('A');
    				a++; c--;
    			}

    		}
    	}else{
    		//BC
    		if(b > c){
    			v.pb('C');
    			c++ ; b--;

    		}else{
    			v.pb('B');
    			b++; c--;
    		}
    	}


    	if(a < 0 || b < 0 || c < 0){
    		flag  = false;
    		break;
    	}



    }


    if(!flag )cout << "No\n";
    else{
    	cout << "Yes\n";
    	int siz = v.size();
    	forn(i,0,siz){
    		cout << v[i] <<"\n";

    	}
    }


    
        


}

int main(){
    SPEED;

     solve();


    return 0;
}
      
       
