//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long double ld;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;



int main(){
   // SPEED;

    int l; cin >> l;
    double ans =(double) l /3.0;

    ans = pow(ans , 3);

    printf("%0.11f\n",ans );





    
    return 0;
}
      
       
