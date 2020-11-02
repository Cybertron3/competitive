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

    int n , x; cin >> n >> x;
    int arr[n];
    int od = 0 , ev = 0;
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 1)od++;
        else ev++;
    }

    if(od == 0)cout << "No\n";

    else if(od >= x){
        if(x%2 == 1)cout << "Yes\n";
        else{
            if(ev >= 1)cout << "Yes\n";
            else cout << "No\n";
        }
    }else {
        if(od % 2 == 0 )od--;

        if(ev >= x-od)cout << "Yes\n";
        else cout << "No\n";

    }

    // else if(ev >= x - 1 ){
    //     cout << "Yes\n";
    // }else{
    //     if((x - ev)%2 == 1)cout << "Yes\n";
    //     else cout << "No\n";
    // }

    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
