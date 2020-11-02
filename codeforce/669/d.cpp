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

/*
i+1=j
max(hi+1,…,hj−1)<min(hi,hj)
max(hi,hj)<min(hi+1,…,hj−1)

*/

void solve(){

    int n; cin >> n;
    std::vector<int> arr(n);
    forn(i,0,n){
        cin >> arr[i];
        
    }

    int step = 0, j;

    void make_edge = [&](int a , int b){
        edge[a].pb(b);
        
    }

    forn(i,0,n-1){
        if(arr[i] > arr[i+1]){
            step++;
            j = i+1
            while(j < n && arr[i] > arr[j]){
                j++;
            }
            i = j;
        }else if(arr[i] < arr[i+1]){
            step++;
            j = i+1;
            while(j < n && arr[i] < arr[j]){
                j++;
            }
            if(j == n){
                j--;
                while(j>i){
                    if(j)
                    j--;
                }
            }
        }else{
            step++;
        }
    }

    cout << step << "\n";


    


    
    

    
    
        


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
    
    // cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
