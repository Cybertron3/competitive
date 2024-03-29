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

    int p[n];
    if(str[0] == '0')p[0] = 1;
    else {
        p[0] = -1*(str[0] - '0' - 1);
    }

    forn(i,1,n){
        if(str[i]=='0')p[i] = p[i-1]+1;
        else{
            p[i] = p[i-1] - 1*(str[i] - '0' - 1);
        }
    }

    int freq[18*100000 + 10];
    memset(freq , 0, sizeof(freq));

    int mid = 900000;

    forn(i,0,n){
        freq[p[i] + mid]++;
    }

    int key = 0;

    ll ans = 0;

    forn(i,0,n){
        ans += freq[mid-key];
        freq[p[i] + mid]--;
        
     

        if(str[i] == '0'){
            key--;
        }else {
            key += 1*(str[i] - '0' - 1);

        }


    }

    cout << ans << "\n";


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
      
       
