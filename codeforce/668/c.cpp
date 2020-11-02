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

/*

1???0 = no
?11?0 = yes


*/

void solve(){

    int n , k;
    cin >> n >> k;

    string str; cin >> str;

    // int one = 0 , zer = 0 ;

    // forn(i,0,k-1){
    //     if(str[i] =='1')one++;
    //     else if(str[i] =='0')zer++;
        
    // }

    // forn(i,k-1,n){
    //     if(str[i] =='1')one++;
    //     else if(str[i] =='0')zer++;

    //     int idx = i - k + 1;
    //     if(idx > 0){
    //         if(str[idx-1] =='1')one--;
    //         else if(str[idx-1] =='0')zer--;

    //     }

    //     if(one > k/2 || zer > k/2){
    //         cout << "NO\n";
    //         return;
    //     }
    //     if(one == k/2){
    //         zer = k/2;
    //         while(idx <= i){
    //             if(str[idx] == '?'){
    //                 str[idx] = '0';
    //             }
    //             idx++;
    //         }

    //     }
    //     if(zer == k/2){
    //         one = k/2;
    //         while(idx <= i){
    //             if(str[idx] == '?'){
    //                 str[idx] = '1';
    //             }
    //             idx++;
    //         }
    //     }
        


    // }


    // cout << "YES\n";
    

    int one = 0  ,zer =0 , idx;
    // forn(i,0,k){
    //     idx = i - k  ;
    //     if(str[i] != '?' && str[idx] != '?'){
    //         if(str[i] != str[idx]){
    //             cout << "NO\n";
    //             return ;
    //         }
    //     }else{
    //         if(str[i] != '?'){
    //             str[idx] = str[i];
    //         }else{
    //             str[i] = str[idx];
    //         }

    //     }
    // }

    // rev(i,n-(k+1),0){
    //     idx = i + k;
    //     if(str[i] != '?' && str[idx] != '?'){
    //         if(str[i] != str[idx]){
    //             cout << "NO\n";
    //             return ;
    //         }
    //     }else{
    //         if(str[i] != '?'){
    //             str[idx] = str[i];
    //         }else{
    //             str[i] = str[idx];
    //         }

    //     }

    // }

    // forn(i,0,k){
    //     if(str[i] ==  '0')zer++
    //     else if(str[i] == '1')one++;
    // }

    // forn(i,0,k){
    //     if(str[i] == '?'){
    //         if(one < k/2){
    //             idx = i;
    //             while(idx < n){


    //                 idx += k;
    //             }
    //         }
    //     }
    // }


    char pres[k];
    memset(pres , '?' , sizeof(pres));

    forn(i,0,n){
        idx = i % k;
        if(pres[idx] == '?'){
            pres[idx] = str[i];

        }else if(str[i] != '?' && pres[idx] != str[i]){

            cout << "NO\n";
            // cout << i;
            return;
        }
    }

    forn(i,0,k){
        if(pres[i] == '1'){
            one++;
        }else if(pres[i] == '0') zer++;

        if(one > k/2 || zer > k/2){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";

    
    

    /*

    1 1 0 ?

    */
    
        


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
      
       
