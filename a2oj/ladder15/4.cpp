//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
// AC
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

    string s1 , s2 ;
    cin >> s1 >> s2;

    int n = s1.size();

    int ans = 0;

    forn(i,0,n){
        if(s1[i] <'a'){
            s1[i] = s1[i] - 'A' + 'a';
        }
        if(s2[i] < 'a'){
            s2[i] = s2[i] - 'A' + 'a';
        }

        if(s1[i] < s2[i]){
            ans = -1;
            break;
        }
        else if(s1[i] > s2[i]){
            ans = 1;
            break;
        }


    }


    cout << ans << "\n";
    
        


}

int main(){
    SPEED;

    solve();




    return 0;
}
      
       
