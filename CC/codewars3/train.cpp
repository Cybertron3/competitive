
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
const int x = 500000;

void solve(){

    int n; cin >> n;
    // int ans[2*x + 2];
    // cout << "sdfnajsdnfw" << endl;
    int cord[2*x + 5];
    int leave[2*x + 5];
    memset(leave , 0 , sizeof(leave));
    // memset(ans , 0 , sizeof(ans));
    memset(cord , 0 , sizeof(cord));

    int b , d;

    // cout << "I am here" << endl;

    forn(i,0,n){
    	cin >> b >> d;
    	cord[b+x]++;
    	cord[d+x]--;
    	leave[d+x]++;

    }

    ll sum = 0 , temp;

    // ans[0] = cord[0];

    forn(i,1,2*x + 1){
    	temp = (ll)(cord[i-1] + cord[i]) % mod;
    	cord[i] = temp ;

    }

    forn(i,0,2*x+1){
    	temp = cord[i];
    	sum = (sum + temp)%mod;
    	sum  = (sum + leave[i]) % mod;

    }


    cout << sum << endl;

    
        


}

int main(){
    SPEED;

     solve();




    return 0;
}
      
       
