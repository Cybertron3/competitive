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

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    int  ev = 0;

    forn(i,0,n){
        if(arr[i] % 2 == 0)ev++;
    }
    
    if(ev%2 == 0){
        cout << "YES\n";
    }else{
        bool find = false;
        sort(arr , arr+n);
        forn(i,1,n){
            if(arr[i] == arr[i-1] + 1){
                find = true;
                break;
            }
        }

        if(find)cout << "YES\n";
        else cout << "NO\n";

    }
    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
