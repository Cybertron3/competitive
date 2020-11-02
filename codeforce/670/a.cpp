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
    std::vector<int> arr(n);
    forn(i,0,n){
        cin >> arr[i];
        
    }

    std::vector<int> freq(101 , 0);

    int num = 0;
    int x  = 101, y = 101;
    bool f1 = false , f2 = false;

    forn(i,0,n){

        freq[arr[i]]++;

    }

    forn(i,0,101){
        if(freq[i] == 1){
            if(!f1){
                f1 = true;
                x = i;
            }
            


        }else if(freq[i] == 0){
            if(!f1){
                f1 = true;
                x = i;
            }
            if(!f2){
                f2 = true;
                y = i;
            }

            break;

        }
    }

    cout << x + y << "\n";
    


    
    

    
    
        


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
      
       
