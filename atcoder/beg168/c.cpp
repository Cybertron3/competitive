//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 

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
const double pie = 3.141592653589793238; 
void solve(){

    double a , b , h , m; 
    cin >> a >> b >> h >> m;

    if(a > b){
    	a = a + b;
    	b = a - b;
    	a = a - b;
    }

    double x = 0.0;


    double theta = (h/12 - m/60 );
    if(theta < 0)theta *= -1;

    // cout << theta << "\n";
    theta *= 2*pie; 

   	if(theta > pie) theta = theta - pie;

    // cout << theta << "\n";

    x = a*a*sin(theta)*sin(theta) ;

    printf("%0.15f\n" , (b-(a *cos(theta)))*(b-(a * cos(theta))));

    
    printf("%0.15f\n",x );
        


}

int main(){
    // SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
