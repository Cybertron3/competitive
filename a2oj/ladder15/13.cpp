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

   	string str; cin >> str;

   	int n  =str.size();

   	int cnt = 1;

   	for(int i = 1 ; i < n ; i++){
   		if(str[i] == str[i-1]){
   			cnt++;
   		}else cnt = 1;
   		if(cnt == 7){
   			cout << "YES\n";
   			return;
   		}
   	}


   	cout << "NO\n";

    
    
        


}

int main(){
    SPEED;
 solve();




    return 0;
}
      
       
