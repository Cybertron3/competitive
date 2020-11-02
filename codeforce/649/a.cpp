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

bool checker(int arr[] , int n , int len , int num){
    ll sum = 0;
    forn(i,0,len){
        sum+=arr[i];
    }

    if(sum % num != 0)return true;

    forn(i , len , n){
        sum += arr[i];
        sum -= arr[i-len];

        if(sum % num != 0)return true;


    }

    return false;

}

int bs(int arr[] ,int  n , int l ,int r ,int x){


    // while(l <= r && ans < r){

    if( l > r)return -1;

    int ans = -1;
    int mid =  l + (r- l)/2;
    bool flag = checker(arr , n , mid , x);

    if(flag){
        // l = mid + 1;
        // if(ans < mid ){
        //     ans = mid;
        // }

        return  max(mid , bs(arr , n , mid+1 , r , x));
    }else{
        // r = mid -1 ;
        return max(bs(arr , n , mid+1 , r , x) , bs(arr , n , l , mid-1 , x));

    }

    


}


void solve(){

    int n , x; cin >> n >> x;
    int arr[n];
    forn(i,0,n)cin >> arr[i];

    ll sum = 0;

    int key = n/2;

    bool flag = true;
    int ans  = -1;

    ans = bs(arr , n , 1 , n , x);

    // int l = 1 , r = n , mid;

    // while(l <= r && ans < r){
    //     mid =  l + (r- l)/2;
    //     flag = checker(arr , n , mid , x);

    //     if(flag){
    //         l = mid + 1;
    //         if(ans < mid ){
    //             ans = mid;
    //         }
    //     }else{
    //         r = mid -1 ;
    //     }


    // }




    cout << ans << "\n";

    

    
    
        


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
      
       
