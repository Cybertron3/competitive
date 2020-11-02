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

    int n , inp; cin >> n;
    int arr[101];
    memset(arr , 0 , sizeof(arr));

    forn(i,0,n){
        cin >> inp;
        arr[inp]++;
    }

    int ans = 0 , sum = 0;

    forn(i,2,101){
        sum = 0;
        forn(j,1,51){
            if(i - j == j){
                sum += arr[j] / 2;
                break;


            }else if(i - j > j){
                sum += min(arr[j] , arr[i-j]);

            }else{
                break;
            }

        }

        // cout << sum << "\n";


        if(ans < sum){
            ans = sum;
        }

    }
    


    cout << ans << "\n";
    

    
    
        


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
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       
