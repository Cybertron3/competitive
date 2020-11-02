//PLUS ULTRA
//one who atops 

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

ll p2[31];
void cal(){
	ll  p = 2;
	forn(i,1,31){
		p2[i] = p;
		p = p*2;

	}

}

void solve(){



    int n ; cin >> n;

    ll pos = p2[n] , neg = 0;
    int i, cnt = n/2;

    for( i = n -1; i >= 0 ; i-- ){
    	if(cnt > 0){
    		neg += p2[i];
    		cnt--;
    	}
    	else break;

    }


    for( ; i >= 0; i--){
    	pos += p2[i];
    }

    cout << pos - neg << "\n";




    
        


}

int main(){
    SPEED;

    cal();

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
