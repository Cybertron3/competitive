//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

int gcd(int a , int b){
    if(b== 0)return a;
    return gcd(b , a % b);
}

int LCM(int a , int b){
    return (a*b)/gcd(a,b);
}




int main(){
    SPEED;

    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	std::vector<set<int>> v;
        std::vector<int> lcm;

        bool found = false;

        for(int i = 1; i<= n; i++){
            found  = false;
            for(int j  = 0 ; j < v.size(); j++){
                

                

            }
            if(!found ){
                lcm.pb(i);
                set<int> st ;
                st.insert(i);
                v.pb(st);



            }
        }


    }
    

    
    return 0;
}
      
       
