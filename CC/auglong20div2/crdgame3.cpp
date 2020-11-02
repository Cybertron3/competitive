//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
using namespace std;
     
     
#define Fast_as_duck ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define rev(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    int c , r;
    cin >> c >> r;

    int countc = 0 , countr = 0 ;

    int i = 9;

    while( c > 0){
        countc += c / i;
        c = c % i;
        i--;
    }

    i = 9;

    while( r > 0){
        countr += r / i;
        r = r % i;
        i--;
    }

    if(countc >= countr){
        cout << "1 " << countr << "\n";
        //rick
    }else{
        cout << "0 " << countc << "\n";

    }



    
    

    
    
        


}

int main(){
    Fast_as_duck;

/*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
