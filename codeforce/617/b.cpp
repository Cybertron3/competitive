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

ll length(ll temp){
      ll  len = 0;

        while(temp > 0){
            temp = temp / 10;
            len++;
        }

    return len;
}


int main(){

    SPEED;

    int t; cin >> t;

    while(t--){
        ll s; cin >> s;

      

        ll ans= 0 , p,num;
        

        while(s > 0){
            p = pow(10 , length(s)-1);
        
            num = (s/p);
            ans = ans + num * p;
            s = s - (num * p)  ;
            s = s+ (num * (p/10));
         

            //cout <<  s << "   " << p << endl;
        }

        cout << ans << endl;
       // cout << endl;

    }


           
     
     
        
    return 0;
}
      
       