//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
/*
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
*/
#define moder 1000000007
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define pb push_back 
#define mp make_pair


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

bool opp(string s1 , string s2){
    // 1 for diff , 0 for same 
    int n = s1.size();
   

    for(int i = 0 ; i < n ; i++)
        if(s1[i] != s2[n-1-i])return false;
    return true; // SAME
}

ll hcf(ll n1, ll n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

bool pal(string s){
    int x = s.size();
    forn(i,0,x/2){
        if(s[i] != s[x-1-i]){
            return false;
        }
    }

    return true;
}


int main(){

    SPEED;

    int n , m;
    cin >> n >> m;

    string str[n] ;

    ll ans = 0;

    forn(i,0,n){
        cin >> str[i];

    }

    bool flag = false;
    bool yes[n];

    memset(yes , false , n*sizeof(yes[0]));

    std::vector<string> vs , ve;

    forn(i,0,n){
        if(yes[i])continue;
        forn(j,i+1,n){
            if(yes[j])continue;
            if(opp(str[i] , str[j])){
                yes[i] = true;
                yes[j] = true;
                ans += (2*m);
                vs.pb(str[i]);
                ve.pb(str[j]);
            }
        }
    }

    int mid = -1;

    forn(i,0,n){

        if(!yes[i]&&pal(str[i])){
            flag = true;
            mid = i;
            
            break;
        }
    }

    if(flag)ans += m;
         
    cout << ans << endl;
    
    forn(i,0,vs.size()){
        cout << vs[i];
    }

    if(flag )cout << str[mid];

    nfor(i,ve.size() - 1 , 0){
        cout << ve[i] ;   
    }

    cout << endl;
     
     
        
    return 0;
}
      
       