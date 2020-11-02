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

    // int n; cin >> n;
    // int arr[n];
    // for(int i = 0; i<n ; i++){
    //     cin >> arr[i];
    // }

    string str , t; cin >> str >> t;

    int n= str.size();
    int j = 0;

    forn(i,0,(int)t.size()){
        if(j==n-1)break;
        if(t[i] == str[j]){
            j++;
        }
    }

    cout << j + 1<<"\n";

    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
