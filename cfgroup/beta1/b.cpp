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

    string str;

    std::vector<pii> v;
    
    forn(i,0,3){
        cin >> str;
        if(str[1] == '>'){
            int t1 , t2;
            t1 = str[0] - 'A';
            t2 = str[2] - 'A';
            v.pb({t2 , t1});
        }else{
            v.pb({str[0] - 'A' , str[2] - 'A'});
        }

    }

    // forn(i,0,3){
    //     forn(j,i+1,3){
    //         if(v[i].ff == v[j].ss && v[i].ss == v[j].ff){
    //             cout << "Impossible\n";
    //             return;
    //         }
            
    //     }
    // }

    std::vector<int> arr;

    arr.pb(v[0].ff);
    arr.pb(v[0].ss);

    if(v[1].ss == arr[0]){
        arr.insert(arr.begin() , v[1].ff);
       
        if(v[2].ff == arr[0] && v[2].ss == arr[2] ){
            forn(i,0,3){
                printf("%c",  (char)arr[i] + 'A');
            }

        }else {
            cout << "Impossible\n";
            return;
        }
        
        

    }else if(v[1].ss == arr[1]){
        printf("%c%c%c", (char) v[2].ff + 'A' , (char) v[2].ss + 'A' ,(char) arr[1] + 'A');
        
    }else if(v[1].ff == arr[0]){
        printf("%c%c%c\n", (char) arr[0] + 'A', (char) v[2].ff + 'A',(char) v[2].ss + 'A');

    }else {
        arr.pb(v[1].ss);
        

        if(v[2].ff == arr[0] && v[2].ss == arr[2] ){
            forn(i,0,3){
                printf("%c",  (char)arr[i] + 'A');
            }

        }else {
            cout << "Impossible\n";
            return;
        }
        


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
      
       
