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

ll fun(ll a , ll k){
    if(k == 1)return a;

    int mini = a%10;
    int maxi = a%10;

    ll tmp = a;
    while(tmp>0){
        if(tmp%10 > maxi )maxi = tmp%10;
        else if(tmp % 10 < mini)mini = tmp%10;

        tmp/= 10;
    }


    if(mini == 0)return a;

    return fun( a + mini * maxi , k-1);



}

void solve(){

    ll a , k;
    cin >> a >> k;

    cout << fun(a , k) << "\n";
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
