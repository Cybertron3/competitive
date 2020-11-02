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
    string str2; cin >> str2;

    int n  =str.size();

    int z = 0 , o = 0, q = 0;

    forn(i,0,n){
    	if(str[i]=='-')z++;
    	else if(str[i] == '+')o++;

    	
    }

    double prob = 1.0;

    forn(i,0,n){
    	if(str2[i]== '-')z--;
    	else if(str2[i] == '+')o--;
    	else q++;

    	// cout << q << " ";

    	if( z < 0 || o < 0){
    		// cout << (float)prob << "\n";
    		prob = 0.0;
    		printf("%0.12f\n",prob );
    		return ;
    	}
    	
    	
    }


    // cout << q << " " << o << " " <<  z << " ";  

    double tmp = 1.0;
    for(int i = 1 ; i <= q ; i++){
    	tmp *= i;
    }

    prob = tmp;
    tmp = 1.0;
    for(int i= 1; i <= z; i++){
    	tmp *= i;
    }

    prob = prob/tmp;
    tmp = 1;
    for(int i  = 1; i <= q-z ; i++){
    	tmp *= i;
    }

    prob = prob / tmp;

    // prob = nCr(q , z)

    tmp = 1.0;
    for(int i = 0; i < q ; i++ ){
    	tmp = tmp*2;
    }

    prob = prob / tmp;

    // prob = (nCr(q, z))/powr(q);


    // cout << prob << "\n";
    printf("%0.12f\n",prob );


    
    
        


}

int main(){
    // SPEED;

    solve();




    return 0;
}
      
       
