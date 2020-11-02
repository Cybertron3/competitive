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

    ll r,c;
    cin >> r >> c;

    ll ans = 0;



    if(c%2 == 0 && r%2==0){
    	ans = (c*r)/2;
    }else if(c%2==0 && r%2 == 1){
    	ans = r*(c/2);
    }else if(c%2==1 && r%2 == 0){
    	ans = c*(r / 2);
    }else {
    	ans = (r+1)/2;
    	c--;
    	ans += r*(c/2);
    
    }

  

    cout << ans << endl;
    
    return 0;
}
      
       
