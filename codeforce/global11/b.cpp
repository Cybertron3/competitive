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

int k;

void fun(char *str , int i , int n ){
    if(k == 0)return;
    if(i+1 < n && str[i+1] == 'L'){
        k--;
        str[i+1] = 'W';
        fun(str  , i+1 , n  );
    }
    if( k == 0)return;
    if(i-1 >= 0 && str[i-1] == 'L'){
        k--;
        str[i-1] = 'W';
        fun(str , i-1  , n );
    }
}

void test(char *str , int i){
    str[i] = 'W';

}

void solve(){

    int n ; cin >> n >> k;
    char str[N];
    cin >> str;

    // int left[n] , r[n];
    // left[0]= -1;
    int x = -1;
    std::vector<int> mid , ext;
    forn(i,0,n){
        // left[i] = x;
        if(str[i] == 'W'){
            if(x == -1){
                ext.pb(i-x-1);
            }else{
                mid.pb(i-x-1);
            }

            x = i;
        }
        

    }

    ext.pb(n-x-1);

    ll ans = 0;

    for(int i = 0; i < n; i++){
        if(str[i] == 'W'){
            if(i-1 >= 0 && str[i-1] == 'W')ans++;

            ans++;
        }
    }

    // cout << ans << "\n";

    sort(mid.begin() , mid.end());

    forn(i,0,(int)mid.size()){
        // cout << mid[i] << "\n";

        if(k >= mid[i] ){
            k -= mid[i];
            if(mid[i] != 0)ans += (2 * mid[i]) + 1;
            if(k == 0)break;
        }
        else{

            ans += (2* k);
            k = 0;
            break;
        }
    }

    // cout << ans << "\n";

    // cout << "\nend\n";

    if(ext.size() == 1){
        if(k == 0)ans =ans;
        else if( k > ext[0])ans = ans + (2 * ext[0]) - 1;
        else{
            ans = ans + 2 * k - 1;
        }
    }else{
        // if(ext[1] <= k){
        //         k -= ext[i];
        //         ans += (2*ext[i]);
        // }
        // else{
        //     ans += (2*k);
        //     k = 0;
            
        // }

        // if(k > 0){
        //     if(ext[0] <= k){
        //         k -= ext[i];
        //         ans += (2*ext[i] - 1);
        //     }
        //     else{
        //         ans += (2*k);
        //         k = 0;
                
        //     }
        // }






        forn(i,0,(int)ext.size()){
            if(ext[i] <= k){
                k -= ext[i];
                ans += (2*ext[i]);
            }
            else{
                ans += (2*k);
                k = 0;
                break;
            }
            // cout << ans << "\n";
        }
    }
    // x = n;
    // rev(i, n-1, 0){
    //     r[i] = x;
    //     if(str[i] == 'W')x = i;
    // }

    // forn(i,0,n){

    // }

    // for(int i = 1 ; i<n-1; i++){
    //     if(k == 0)break;
    //     if(str[i] == 'L' && str[i-1] == 'W' && str[i+1] == 'W'){
    //         k--;
    //         test(str , i);
    //             // str[i] == 'W';
    //     }
    // }
    // // cout << str << "\n";

    // for(int i = 0; i < n; i++){
    //     if(str[i] == 'W'){
    //         fun(str  , i , n );

    //     }
    // }

    // for(int i = n-2 ; i >= 0; i--){
    //     if(k == 0)break;
    //     if(str[i] == 'L'){
    //         if(str[i+1] == 'W' ){
    //             str[i] = 'W';
    //             k--;
                
    //         }
    //     }
    // }

    // int i = n-1;

    // while(i >= 0 && k > 0){
    //     if(str[i] == 'L'){
    //         k--;
    //         test(str , i);
    //         fun(str , i , n);
    //     }

    //     i--;
    // }

    // cout << str << "\n";


    // ll ans =0 ;



    // for(int i = 0; i < n; i++){
    //     if(str[i] == 'W'){
    //         if(i-1 >= 0 && str[i-1] == 'W')ans++;

    //         ans++;
    //     }
    // }

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

    // char st[50] ;
    // cin >> st;
    // test(st);
    // cout << st << "\n";

    int t = 1;     
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}
      
       
