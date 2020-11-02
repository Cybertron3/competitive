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

int n;

int find(string str , int i, int ch ){
    for( ; i < n ; i++ ){
        if(str[i] == ch)return i;
    }

    return n;
}

void solve(){

    string str; cin >> str;

    n =  str.size();

    int x = find(str , 0 , 'h');
    x = find(str , x +1  , 'e');
    x = find(str , x +1 , 'l');
    x = find(str , x +1 , 'l');
    x = find(str , x +1 , 'o');

    if(x < n)cout << "YES\n";
    else cout << "NO\n";



    
    
        


}

int main(){
    SPEED;
 solve();




    return 0;
}
      
       
