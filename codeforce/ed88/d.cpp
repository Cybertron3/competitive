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


    /*
        10 10 -20 1 ...... 1 {20 times}

        ans is 19 : 20 times one - maxi(= 1) = 19

    */



    int n; cin >> n;
    short int arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    ll sum = 0, ans = 0;
    ll maxi   ;

    // not zero , 1st positive integer

    int pos = 0;

    for( ; pos < n ; pos++ ){
        if(arr[pos] > 0){
            break;
        }
    }

    if(pos < n){
        maxi = arr[pos];
        sum = arr[pos];
        ans = 0;
    }

    forn(i,pos+1,n){
        if(arr[i] > 0){
            sum += arr[i];
            if(maxi < arr[i]){
                maxi = arr[i];
            }

            if(sum - maxi > ans){
                ans = sum - maxi;
            }
        }else{
            if(sum >= abs(arr[i])){
                sum += arr[i];
                if(maxi < arr[i]){
                    maxi = arr[i];
                }

                if(sum - maxi > ans){
                    ans = sum - maxi;
                }

            }else{
                // go search next positive value
                for(pos = i ; pos < n ; pos++ ){
                    if(arr[pos] > 0){
                        break;
                    }
                }

                if(pos < n){
                    maxi = arr[pos];
                    sum = arr[pos];
                }

                i = pos+1;
            }
        }
    }

    
    cout << ans << "\n";
    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
