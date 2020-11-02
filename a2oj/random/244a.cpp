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

    int n , k , inp; cin >> n >> k;

    int child[k*n + 1];
    memset(child , 0 , sizeof(child));

    forn(i,1,k+1){
    	cin >> inp;
    	child[inp] = i;

    }

    bool flag;
    

    forn(i,1,k + 1){

    	int cnt = n -1;
    	flag = false;


    	forn(j , 1 , k*n + 1){

    		if(cnt == 0 && flag)break;

	    	if(child[j] == 0 && cnt > 0){
	    		child[j] = i;
	    		cout << j << " ";
	    		cnt--;
	    	}else if(child[j] == i){
	    		flag = true;
	    		child[j] = i;
	    		cout << j << " ";

	    	}
		}


		cout << endl;
    }
    

    
    return 0;
}
      
       
