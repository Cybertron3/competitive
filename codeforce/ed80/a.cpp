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

    int d , n; 
    cin >> n >> d;

    if(d <= n){
        cout << "YES\n";
    }else{
        int x = sqrt(d) , temp;

        forn(i,max(0 , x - 2), x+3){
            temp = (d-1)/(i+1);
            temp++;
            temp += i;
            if(temp <= n){
                cout << "YES\n";
                return;
            }
        }

        cout << "NO\n";
        // temp += 2;
        // // d = (d-1)/(temp + 1);
        // // d++;

        // if(temp  <= n){
        //     cout << "YES\n";
        // }else{
        //     cout << "NO\n";
        // }
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
      
       
