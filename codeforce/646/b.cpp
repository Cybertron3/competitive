//PLUS ULTRA


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

    string str; cin >> str;
    int n = str.size();

    int zer[n] , one[n];
    zer[0] = 0;
    one[0] = 0;
    if(str[0] == '0')zer[0]++;
    else one[0]++;


    forn(i,1,n){
        zer[i] = zer[i-1];
        one[i] = one[i-1];
        if(str[i] == '0')zer[i]++;
        else one[i]++; 
    }

    int rzer[n] , rone[n];
    rzer[n-1] = 0; rone[n-1] = 0;
    if(str[n-1] == '0')rzer[n-1]++;
    else rone[n-1]++;
    nfor(i,n-2 , 0){
        rzer[i] = rzer[i+1];
        rone[i] = rone[i+1];

        if(str[i] == '0')rzer[i]++;
        else rone[i]++;
    }

    int ans = min(one[n-1] , zer[n-1]);

    // cout << ans << "\n\n";

    int tmp1 , tmp2;
    forn(i,0,n-1){
        tmp1 = one[i] + rzer[i+1];
        tmp2 = zer[i] + rone[i+1];
        ans =  min(ans , min(tmp2 , tmp1));

    }


    cout << ans << "\n";



}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
