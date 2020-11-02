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

    int n ; cin >> n;

    int arr[n];
    forn(i,0,n)cin >> arr[i];

    int five = 0 , ten = 0;

    forn(i,0,n){
        if(arr[i] == 10){
            ten++;
            if(five == 0){
                cout << "NO\n";
                return;
            }
            five--;
        }else if(arr[i] == 5){
            five++;
        }else{

            if(ten == 0){
                if(five > 1){
                    five -= 2;
                }else {
                    cout << "NO\n";
                    return;
                }

            }else ten--;



        }
    }


    cout << "YES\n";
    

    
    
        


}

int main(){
    SPEED;


    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
