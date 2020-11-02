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



vector<int> binary(ll a){
    std::vector<int> v; 
    int ch ;

    while(a>0){
        ch = a % 2;
        a /= 2;
        v.pb(ch);
    }

    return v;

}

std::vector<int> shift(std::vector<int> v){
    int temp = v[0];

    forn(i,0,v.size()-1){
        v[i] = v[i+1];
    }

    v[v.size() -1 ] = temp;

    return v;

}


int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
    	ll a , b; cin >> a >> b;

        std::vector<int> v1 , v2;

        v1 = binary(a);
        v2 = binary(b);

        forn(i,v2.size(),v1.size()){
            v2.pb(0);
        }

        forn(i,v1.size() , v2.size()){
            v1.pb(0);
        }

        ll max = 0 , s = 0 , rot = 0; 


        forn(i,0,v1.size() ){
            
            ll ans = 0;
            ll mrk = 1;

            forn(j,0,v1.size()){

                if(v1[j] != v2[j])ans +=mrk ;
                mrk *= 2;

            }

            if(max < ans ){
                max = ans;
                rot  = s ;

            }

            s++;
            v2 = shift(v2);

        }

        cout << rot << " " << max << endl;





    }
    

    
    return 0;
}
      
       
