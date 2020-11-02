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

std::vector<int> v;


int bs(int l , int r , int x){
    if(r >= l){
        int mid = l + ((r-l) / 2);

        if(v[mid] == x)return mid;

        if(v[mid] > x)return bs(l , mid-1 , x);

        return bs(mid+1 , r , x);
    }

    return r;
}

void solve(){

    int a , b;
    cin >> a >> b;

    int q; cin >> q;
    int low , high;

    int hcf = __gcd(a , b);

    // std::vector<int> v;
    int i = 1;
    while(i*i  <= hcf){
        if(hcf%i == 0){
            if(i*i == hcf){
                v.pb(i);
            }else{
                v.pb(hcf/i);
                v.pb(i);
            }
        }
        i++;
    }

    sort(v.begin() , v.end());

    while(q--){
        cin >> low >> high ;

        int idx = bs(0 , (int)v.size() - 1  , high );
        if(idx != -1 && v[idx] >= low){
            cout << v[idx] << " \n";
        }else cout << "-1\n";




    }

    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
