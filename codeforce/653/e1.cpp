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

    int n , K;
    cin >> n >> K;

    int ina , inb , tim;

    std::vector<int> a , b , both;

    forn(i,0,n){
        cin >> tim >> ina >> inb ;

        if(ina *inb )both.pb(tim);
        else if(ina )a.pb(tim);
        else if(inb)b.pb(tim);


    }

    int ka = K , kb = K;

    int i = 0  , j = 0   , k= 0;

    ll sum= 0;

    while(ka > 0 && kb > 0 && i < a.size()  && j < b.size() && k < both.size()){
        if(both[k] <= a[i] + b[j] ){
            sum += both[k];
            k++;
            ka--;
            kb--;
        }else if(a[i] <= b[j]){
            sum += a[i];
            i++;
            ka--;
        }else {
            sum += b[j];
            j++;
            kb--;
        }
    }


    while(ka > 0  && kb > 0 && k < both.size()){
        
        sum+= both[k];
        k++;
        ka--;
        kb--;
    }

    while(ka > 0){
        if( k < both.size() && i < a.size() ){
            if( both[k] <= a[i]){
                sum+= both[k];
                k++;
                ka--;
                kb--;
            }else{
                sum += a[i];
                i++;
                ka--;

            }
        }else if(  k < both.size() ){
            sum+= both[k];
            k++;
            ka--;
            kb--;

        }else if( i < a.size()){
            sum += a[i];
            i++;
            ka--;
        }else break;
    }

    while(kb > 0){
        if( k < both.size() && j < b.size() ){
            if( both[k] <= b[j]){
                sum+= both[k];
                k++;
                ka--;
                kb--;
            }else{
                sum += b[j];
                j++;
                kb--;

            }
        }else if(  k < both.size() ){
            sum+= both[k];
            k++;
            ka--;
            kb--;

        }else if( i < a.size()){
            sum += b[j];
            j++;
            kb--;
        }else break;
    }


    if(ka >0 || kb > 0){
        cout << "-1\n";
    }else {
        cout << sum << "\n";
    }

    
    

    
    
        


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
      
       
