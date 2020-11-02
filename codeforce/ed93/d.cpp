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

    int r , g , b;
    cin >> r >> g >> b;

    int red[r] , green[g] , blue[b];

    forn(i,0,r)cin >> red[i];
    forn(i,0,g)cin >> green[i];
    forn(i,0,b)cin >> blue[i];

    sort(red , red+r);
    sort(green , green + g);
    sort(blue , blue+b);

    ll area = 0;

    r--;g--;b--;
    while(r>= 0 && b >= 0 && g >= 0){

        if(green[g] <= red[r] && green[g] <= blue[b]){
            area += (red[r] *  blue[b]);
            r--;b--;
        }else if(red[r] <= blue[b]){
            area += (green[g] * blue[b]);
            g--;b--;
        }else{
            area += (green[g] * red[r]);
            g--;r--;
        }

        // if(green[g] >= red[r] && green[g] >= blue[b]){
        //     if(red[r] >= blue[b]){
        //         area+= (green[g] * red[r] );
        //         g--;r--;
        //     }else{
        //         area+= (green[g] * blue[b]);
        //         g--;b--;
        //     }
        // }else if(red[r] >= blue[b]){
        //     if(blue[b] <= green[g]){
        //         area += (green[g] * red[r]);
        //         g--;r--;
        //     }else{
        //         area+= (red[r] * blue[b]);
        //         r--;b--;
        //     }

        // }else{
        //     if(red[r] >= green[g]){
        //         area += ( blue[b]*red[r]);
        //         b--;r--;
        //     }else{
        //         area += (green[g]*blue[b]);
        //         b--;g--;
        //     }

        // }
    }

    // cout << area << "\n";


    while(g >= 0 && r >= 0) {
        area += (green[g]*red[r]);
        g--;r--;
    }

    while(r >= 0 && b >= 0){

        area+= (red[r] * blue[b]);
        r--;b--;
    }


    while(g >= 0 && b >= 0){
        area += (green[g] * blue[b]);
        g--;b--;
    }

    cout << area << "\n";

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
      
       
