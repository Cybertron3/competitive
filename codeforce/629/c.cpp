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
    	int n; cin >> n;
    	string str; cin >> str;

    	char a[n] , b[n];

    	a[0] = '1';
    	b[0] = '1';

    	int flag = 1;

    	forn(i,1,n){
    		if(str[i] == '0'){
    			a[i] = '0';
    			b[i] = '0';
    		}else if(str[i] == '1'){
    			if(flag == 1){
    				a[i] = '1';
    				b[i] = '0';
    				flag = 2;
    			}else{
    				a[i] = '0';
    				b[i] = '1';
    			}


    		}else{

    			if(flag == 1){
    				a[i] = '1';
    				b[i] = '1';
    			}else{
    				a[i] = '0';
    				b[i] = '2';
    			}
    		}	
    	}


    	forn(i,0,n)cout << a[i];
    	cout << endl;
    	forn(i,0,n)cout << b[i];
    	cout << endl;


    }



    
    return 0;
}
      
       
