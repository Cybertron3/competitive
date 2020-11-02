//Lion's Sin Escanor 

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007
#define forn(i,start,n) for(int i = start; i < n ; i++)

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
    // 1 for diff
    // 0 for same 

    int n = s1.size();
    int m = s2.size();

    if(n!=m)return 1;

    forn(i,0,n)
        if(s1[i] != s2[i])return 1;


    return 0; // SAME
}




int main(){

    ll n, m; cin >> n >> m;

    int a[n] , b[n];

    forn(i,0,n) sd(a[i]);
    forn(i,0,n) sd(b[i]);

    sort(a , a + n);
    sort(b , b + n);

    int count = 1;

    vector <pair<int,int>> arr_a;

    forn(i,0,n-1){
        if(a[i] != a[i+1]){
            arr_a.push_back(make_pair(count,a[i]));
            count = 1;
        }else count++;

    } 

    arr_a.push_back(make_pair(count,a[n-1]));

    count = 1;
    std::vector<pair<int , int>> arr_b;

    forn(i,0,n-1){
        if(b[i] != b[i+1]){
            arr_b.push_back(make_pair(count,b[i]));
            count = 1;
        }else count++;
    }

    arr_b.push_back(make_pair(count,b[n-1]));


    int sizea = arr_a.size();
    int sizeb = arr_b.size();

    sort(arr_a.begin() , arr_a.end());
    sort(arr_b.begin() , arr_b.end());

    ll x = 1000000000000000;


    for(int i = 0; , i < sizea ; i++){



        ll temp = moding(arr_b[i]. -arr_a[i], m); 

        bool flag = true;

        for(int j  = 1; j < sizeb  ; j++){
            if(arr_a[i].first != arr_b[j].first){
                flag = 
                break;
            }
            if(moding( arr_b[j] - arr_a[j] , m  ) != temp ){
                flag = false; break;
            }
        }

        if(flag && temp < x){
            x = temp;
        }

    }

    cout << x << endl;

           
     
     
        
    return 0;
}
      
       