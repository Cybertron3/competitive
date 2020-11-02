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
    int ans[n];
    memset(ans , 0 , sizeof(ans));
    ans[0] = 1;

    set<int , greater<int>> one , zer;

    set<int , greater<int> > :: iterator itr;





    forn(i,0,n){
        if(str[i] == '1'){
            if(zer.size() != 0){
                itr = zer.begin();
                ans[i] = *itr ;
                one.insert(*itr);
                zer.erase(*itr);
            }else{
                if(one.size() > 0){

                    itr = one.begin();
                    ans[i] = (*itr) + 1;
                    one.insert( (*itr) + 1);
                }else{
                    one.insert(1);
                }
            }

        }else{
             if(one.size() != 0){
                itr = one.begin();
                ans[i] = *itr ;
                zer.insert(*itr);
                one.erase(*itr);
            }else{
                if(zer.size() > 0){
                    itr = zer.begin();
                    ans[i] = (*itr) + 1;
                    zer.insert( (*itr) + 1);
                }else{
                    zer.insert(1);
                }
            }

        }
    }


    int k = 0;

    forn(i,0,n){
        if(k < ans[i]){
            k = ans[i];
        }
    }

    cout << k << "\n";

    forn(i,0,n){
        cout << ans[i] << " ";
    }

    cout << "\n";


    
    

    
    
        


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
      
       
