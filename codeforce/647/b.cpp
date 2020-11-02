//PLUS ULTRA


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

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    set<int> s1 ;

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
        s1.insert(arr[i]);
    }


    forn(i,1,1024){
        set<int> s2;
        forn(j,0,n){
            s2.insert(arr[j]^i);
        }
        bool flag = true;
        if(s1.size() != s2.size()){
            continue;
        }
        auto k = s2.begin(); 
        for (auto j = s1.begin(); j != s1.end(); ++j) {
            if(*j != *k){
                flag = false;
            }

            k++;
        }

        if(flag){
            cout << i << "\n";
            return;
        }

    }



    cout << "-1\n";

    

    
    
        


}

int main(){
    SPEED;

/*
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
