//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
// AC
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

    int n , k; cin >> n >> k;

    int arr[n];
    forn(i,0,n)cin >> arr[i];

    std::vector<ll> v;

    ll bsum = 0;

    forn(i,0,k){
        bsum += arr[i];
    }

    v.pb(bsum);

    forn(i,k,n){
        bsum += arr[i] - arr[i-k];
        v.pb(bsum);

        // cout << bsum << " ";
    }

    // cout << " \n";

    // v stores all n - k + 1 segments sum value


    // back[i][0] stores the max value betwen i and v.size()
    //back[i][1] stores the index of max value

    // ll back[(int)v.size()][2];
    // memset(back , 0 , sizeof(back));

    // back[(int)v.size()-1][0] = v[(int)v.size() - 1];
    // back[(int)v.size()-1][1] = (int)v.size() - 1;

    // nfor(i,(int)v.size() - 2  , 0){
    //     if(back[i+1][0] >= v[i]){
    //         back[i][1] = back[i+1][1];
    //         back[i][0] = back[i+1][0];
    //     }else{
    //         back[i][1] = i;
    //         back[i][0] = v[i];
    //     }

    //     // cout << back[i][0] << " " << back[i][1] << " \n";
    // }

    ll front[(int)v.size()][2];
    memset(front , 0 , sizeof(front));

    front[0][0] = v[0];
    front[0][1] = 0;
    forn(i,1, (int)v.size()){
        if(front[i-1][0] < v[i]){
            front[i][1] = i;
            front[i][0] = v[i];
        }else{
            front[i][1] = front[i-1][1];
            front[i][0] = front[i-1][0];
        }
    }


    ll maxi = 0;
    int idx = k  ;
    int a = 0 , b = k;
    while(idx  < (int)v.size() ){
        if( v[idx] + front[idx-k][0] > maxi){
            b = idx; a = front[idx-k][1];
            maxi = v[idx] + front[idx-k][0];
        }

        idx++;
    }

    // forn(i,0,(int)v.size()){
    //     if(j >= n)break;
    //     if(maxi < v[i] + v[j]){
    //         maxi = v[i] + v[j];
    //         idxb = j;
    //         idxa = i;
    //     }

    //     j++;
    // }





    cout << a + 1 << " " << b + 1 << "\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
