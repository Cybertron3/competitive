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

    int n , k; cin >> n >> k;
    string arr; cin >> arr;

    int ans = 0;
    bool found = false;

    forn(i,0,n){
        if(arr[i] == '0'){
            int cnt = 0;
            while(i < n){
                if(arr[i] == '0'){
                    cnt++;
                    
                }else break;

                i++;
            }

            if(!found && i == n){
                found = true;
                ans += (cnt + k)/(k+1);


            }else if(i == n ){
                if(cnt <= k)continue;
                cnt = cnt - k;
                ans += (cnt+ k)/(k+1);
            }else if(!found){
                found = true;
                ans += (cnt )/(k+1);

            }
            else{
                ans += (cnt - k)/(k+1);
            }

        }else{
            found = true;
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
      
       
