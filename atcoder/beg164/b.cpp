//PLUS ULTRA
//one who atops 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){
    int a , b , c ,d;

    cin >> a >> b >> c >> d;

    int xa = (a - 1)/d + 1 , xb = (c - 1)/b + 1;

    if(xa >= xb)cout << "Yes";
    else cout << "No";



}

int main(){
    SPEED;

   solve();



    

    return 0;
}
      
       
