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

    sort(arr , arr + n);

    int i = n-2  , j = 1;

    int sum = 0;
    std::vector<int> ans;
    ans.pb(arr[n-1]);
    ans.pb(arr[0]);

    int ev = 0;
    sum = abs(ans[1] - ans[0]);

    while(i > j){
        if(ev  % 2 ){
            if(arr[j] == ans[ans.size() - 1])break;
            ans.pb(arr[j]);
            sum += abs(ans[ans.size()-1] - arr[j]);
            j++;

        }else{
            if(arr[i] == ans[ans.size() - 1])break;
            ans.pb(arr[i]);
            sum += abs(ans[ans.size() - 1] - arr[i]);
            i--;
        }
    }


    cout << ans.size() << "\n";

    forn(i,0,ans.size()){
        cout << ans[i] << " ";
    }

    cout << "\n";

    
    
        


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
      
       
