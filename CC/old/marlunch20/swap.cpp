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
    	string a , b;

    	cin >> a >> b;

    	int n = a.size();
    	int m = b.size();
    	int temp;

    	forn(i,0,n/2){
    		temp = a[i];
    		a[i] = a[n-1-i];
    		a[n-1-i] = temp;

    	}

    	forn(i,0,n/2){
    		temp = b[i];
    		b[i] = b[n-1-i];
    		b[n-1-i] = temp;
    	}

    	bool flag = false;

    	
    	nfor(i,n-1,0){
    		if(n < m)break;
    		if(flag)break;

    		int maxi = '0' ;
    		int idx = 0;

    		forn(j,0,i){
    			if(maxi < b[j]){
    				maxi = b[j];
    				idx = j;

    			}

    		}

    		if(maxi < a[i]){
    			b[idx] = a[i];
    			a[i] = maxi;
    			break;

    		}

    	}

    	nfor(i,n-1,0){
    		if(n >= m)break;
    		if(flag)break;

    		int maxi = '0' ;
    		int idx = 0;

    		forn(j,0,i){
    			if(maxi < a[j]){
    				maxi = a[j];
    				idx = j;

    			}

    		}

    		if(maxi < b[i]){
    			a[idx] = b[i];
    			b[i] = maxi;
    			break;


    		}

    	}


    	forn(i,0,n/2){
    		temp = a[i];
    		a[i] = a[n-1-i];
    		a[n-1-i] = temp;

    	}

    	forn(i,0,n/2){
    		temp = b[i];
    		b[i] = b[n-1-i];
    		b[n-1-i] = temp;
    	}

    	int i = n-1 , j = m-1;

    	vector<int> v;

    	int x , y , c = 0;

    	while(1){

    		if(i<n){
    			x = a[i] - '0';
    			i--;
    		}
    		else x = 0;

    		if(y<m){
    			y=b[j] - '0';
    			j--;
    		}
    		else y = 0;

    		if(i < n && y < m && c == 0)break;

    		
    		v.pb((x+y+c)%10);
    		c = (x+y+c)/10;

    		





    	}

    	forn(z , 0, v.size()){
    		temp = v[i];
    		v[i] = v[n-1-i];
    		v[n-1-i] = temp;
    	}

    	forn(z , 0, v.size()){
    		cout << v[i] ;
    	}

    	cout << endl;


    	




    }
    

    
    return 0;
}
      
       

