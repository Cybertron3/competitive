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
#define sz(x) (int)(x).size()
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)

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

/*

89

354 356 352 355 355 355 352 354 354 352 355 356 355 352 354 356 354 355 355 354 353 352 352 355 355 356 352 352 353 356 352 353 354 352 355 352 353 353 353 354 353 354 354 353 356 353 353 354 354 354 354 353 352 353 355 356 356 352 356 354 353 352 355 354 356 356 356 354 354 356 354 355 354 355 353 352 354 355 352 355 355 354 356 353 353 352 356 352 353

v = 15 17 17 18 22
ans : YES


*/


int main(){

    SPEED;

    int n , inp; cin >> n; 

    int arr[n];

    forn(i,0,n){
        cin >> arr[i];
    }

    sort(arr , arr + n);

    // priority_queue< int> v;
    std::vector<int> v;

    int count = 1;

    forn(i,0,n-1){
        if(arr[i] != arr[i+1]){
            // v.push(count);
            v.pb(count);
            // cout << count << " ";
            count = 1;
           
        }else count++;
    }

    // v.push(count);
    // cout << count << endl;
    v.pb(count);

    if(sz(v) == 1  ){
        if(n==1)cout << "YES\n";
        else cout << "NO\n";

        return 0;
    }

    int num1 = 2 , num2 = 0;
    sort(v.begin(), v.end());


    int tot = v[0] , prev = 0;

    FOR(i,1,sz(v)){
        // cout << tot << " ";
        num1 = v[i];
        // cout << num1 << "\n";
        if(num1 <= tot + 1 ){
            tot = tot + prev + num1;
            num1 = 0;
        }else{
            num1 -= tot;
            tot = tot * 2 ;
            tot += prev;
            prev = 2*num1;
            
            if(i+1 < sz(v)){
                v[i+1] -= num1;
                num1 = 0;

            }else{
                cout << "NO\n";
                return 0;
            }
        }
        
    }

    cout << "YES\n";
    
    

    //  while(!v.empty()){
    //     num1 = v.top();
    //     v.pop();
    //     if(!v.empty()){
    //         num2 = v.top();
    //         v.pop();
            
    //         num1 -= num2;
    //         num2 = 0;
    //         if(num1 > 0)v.push(num1);
            
    //         // v.push(num1);
    //     }else{
    //         // cout << "NO\n";

    //         // return 0;
    //         break;
    //     }

    // }


    // if(num1 > 1)cout << "NO\n";
    // else cout << "YES\n";

           
     
     
        
    return 0;
}
      
       