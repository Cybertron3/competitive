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

    string str;
    cin >> str;

    int n = str.size();
    int l = 0 , r = 0,  u  = 0, d = 0;
    forn(i,0,n){
        if(str[i] == 'R')r++;
        else if(str[i] == 'L')l++;
        else if(str[i] == 'U')u++;
        else d++;

    }

    int x , y , a , b;
    cin >> a >> b ;

    int q; cin >> q;

    
    while(q--){

        cin >> x >> y;

        if(x-a >= -1*l && x-a <= r){
            if(y-b >= -1*d && y-b <= u){
                cout << "YES " << abs(x-a) + abs(y-b) <<"\n";
                continue;
            }
        }

        cout << "NO\n";

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
      
       
