//It doesn't matter as long as you rise to the top - Katsuki Bakugo

/*

16 dezlyajbqcuowzvc


*/

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


int fun(string str , char ch ,  int l , int r , int ans ){
    if(l == r){
        // cout << ans << "\n";

        if(ch == str[l]){
            return ans;
        }else return ans+1;
    }

    int mid = l + (r-l)/2;
    int leftc = 0 , rc = 0;
    forn(i,l ,mid+1){
        if(str[i] == ch){
            leftc++;
        }
    }
    forn(i,mid+1,r+1){
        if(str[i] == ch){
            rc++;
        }
    }


    // if(leftc < rc){
    //     // ans += ((r - l+ 1)/2 )- rc;
    //     // cout << ans << "\n";
    //     // cout << l << " " << mid << "\n";
    //     // ch++;
    //     // cout << (char)ch << "\n";
        
    //         return  fun(str , ch + 1 , l , mid , ans + ((r - l+ 1)/2 )- rc); 
      
    // }else if(leftc > rc){
    //     // ans += ((r - l+ 1)/2 )- leftc;
    //     // cout << ans << "\n";
    //     // cout << mid+1 << " " << r << "\n";

       
    //        return fun(str , ch+1 , mid+1 , r,  ans + ((r - l+ 1)/2 )- leftc); 
        
    // }else{
        // if(leftc + rc == (r-l+1))return ans;
        // ans  += (r-l+1)/2 - rc;

        return min(fun(str , ch+1 , l , mid , ans + ((r - l+ 1)/2 )- rc ) , fun(str , ch+1 , mid+1 , r,   ans + ((r - l+ 1)/2 )- leftc));

    // }
}

void solve(){

    int n; cin >> n;
    string str; cin >> str;


    cout << fun(str , 'a' , 0 , n-1 , 0) << "\n";
    
    

    
    
        


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
    int i = 1;
    
    cin >> t;
    
    // if(t > 10 ){

    //     while(i < 371){
    //         string str;
    //         int n ;
    //     cin >> n >> str;

    //     i++;

    //     }

    //     string str ; int n;
    //     cin >> n >> str;
    //     cout << n << " " << str << "\n";
    // }

    while(i <= t){

        solve();
        i++;
    }




    return 0;
}
      
       
