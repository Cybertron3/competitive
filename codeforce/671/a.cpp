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

    int n; cin >> n;
    
    string str; cin >> str;

    int ch;

    if(n%2 == 0){

        bool flag = false;
        for(int i = 1; i < n ; i+= 2){
            ch = str[i] - '0';
            if(ch % 2 == 0){
                flag = true;
                break;
            }
        }
        if(flag)cout << "2\n";
        else cout << "1\n";

    }else{

        bool flag = false;
        for(int i = 0; i < n ; i+= 2){
            ch = str[i] - '0';
            if(ch % 2 == 1){
                flag = true;
                break;
            }
        }
        if(flag)cout << "1\n";
        else cout << "2\n";

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
      
       
