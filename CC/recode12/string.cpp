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

const int N = 1e5 + 10 ;// mod =  1000000007;

int mod(int x ,int n){
    x = x % n;
    if(x < 0)x = x + n;

    return x;
}

void solve(){

   string str; cin >> str;
   int n = str.size();

   bool flag = true;

   forn(i,0,n){
    if(str[i] == str[(i+2)%n] && str[i] == str[mod(i-2 , n)])
        continue;
    else {
        flag = false;
        break;
    }
   }

    if(flag)cout <<"YES\n";
    else cout << "NO\n"; 




    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       
