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

    int n; cin >> n;

    string str;

    cin >> str;

    int st = 0, ed = n;

    while(ed > 0 && str[ed-1] == 'R')ed--;

    while(st < n && str[st] =='L' )st++;

    ll ans = 0;

    nfor(i,ed-1,0){
    	if(str[i] == 'R'){
    		ans += ed - 1 - i;
    		ed--;

    	}

    }


    cout << ans << endl;

    
    return 0;
}
      
       
