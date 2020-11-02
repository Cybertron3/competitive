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

    ll n , k; cin >> n >> k;
    ll arr[n];
    forn(i,0,n){
        cin >> arr[i];
    }

    std::vector<pair<ll , int>> v;

    sort(arr , arr + n);

    int cnt = 1;

    forn(i,0,n){
        if(i == n-1){
            v.pb({ arr[i] , cnt});
        }else{
            if(arr[i] != arr[i+1]){
                v.pb( {arr[i] , cnt});
                cnt = 1;
            }else{
                cnt++;
            }
        }
    }

    // cout << v[0].ff << " " << v[0].ss << "\n"; 

    cnt = v[0].ss;
    int num = v[0].ff , tempcnt;


    forn(i,1,(int)v.size()){
        tempcnt = v[i].ss;
        int tk = k;

        rev(j , i-1 , 0){
            // cout << "sg";
            if((v[i].ff - v[j].ff )*v[j].ss >= tk){
                int temp = tk / (v[i].ff - v[j].ff); 
                tempcnt += temp;
                // cout << temp << "\n";
                
                break;
            }else{
                tk -= (v[i].ff - v[j].ff)*v[j].ss ;
                tempcnt += v[j].ss; 

            }
        }


        if(tempcnt > cnt){
            cnt = tempcnt;
            num = v[i].ff;
        }

    }

    cout << cnt << " " << num << "\n";




    


    
    

    
    
        


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
      
       
