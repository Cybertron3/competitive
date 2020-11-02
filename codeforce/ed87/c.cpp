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

const int N = 1e5 + 10 , mod =  1000000007 , pie = 3.1415926535;
// pi = pie

double polydiagonal(double n ) { 
  
    return 1 / cos((((n - 2.0) * 180.0) / (2.0 * n)) *( 3.1415926535 / 180.0)); 
} 

void solve(){

    int n; cin >> n;

    //  if(n==2){
    //  	cout << 1 << "\n";
    // 	return;
    // }
    double tn = n + 0.0;



    printf("%0.8f\n",  polydiagonal( tn + tn ) );

    
    
        


}

int main(){
    // SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       




