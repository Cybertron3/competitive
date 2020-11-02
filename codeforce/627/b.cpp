//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef long double ld;
typedef pair <int , int> pii;
typedef pair <ll , ll> pll;

const int N = 1e5 + 10 , mod =  1000000007;


ll moding( ll x , ll y ){
    ll ans = x % y;
    if(ans < 0)ans = ans + y ;
    return ans ;
}


bool isprime(ll n){
    if(n==2) return true;
    if(n==3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    ll i = 5,w=2;

    while(i*i <= n){
        if(n%i == 0)return false;
        i += w;
        w = 6 - w;
    }
    return true;
}

ll cmp(string s1 , string s2){
    // 1 for diff , 0 for same 
    int n = s1.size();
    int m = s2.size();
    if(n!=m)return 1;
    for(int i = 0 ; i < n ; i++)
        if(s1[i] != s2[i])return 1;
    return 0; // SAME
}

ll hcf(ll n1, ll n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}


int main(){

 
    SPEED;

    int t; cin >> t;

    while(t--){

        int n,inp; cin >> n;

        std::vector<pii> v;

        forn(i,0,n){
        //cin >> arr[i];
            cin >> inp;
            v.pb(mp(inp,i));

        }
        sort(v.begin() , v.end());

        bool flag = false;


        forn(i,0,n-1){

            forn(j,i+1,n){
                if(v[i].first == v[j].first){
                    if(v[j].second - v[i].second > 1 ){
                        flag = true;
                        break;
                    }
                }else break;
            }

            if(flag)break;


        }

        if(flag)cout << "YES" << endl;
        else cout << "NO" << endl;

        
    }



    
        
    return 0;
}
      
       
