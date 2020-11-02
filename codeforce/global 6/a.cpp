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
#define forn(i,n) for(int i = 0; i < n ; i++)

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

    forn(i,n)
        if(s1[i] != s2[i])return 1;


    return 0; // SAME
}




int main(){

    int n; cin >> n;

    string str;

    while(n--){

        cin >> str;
        int arr[10] = {0};

        int k = str.size();

        for(int i = 0; i< k ; i++){
            arr[str[i] - '0']++;
        }

        bool flag = false;

        if(arr[0]==0){
            cout << "cyan ";
        }else {
            arr[0]--;
            int sum = 0;
            forn(i,10){
                sum += (i*arr[i]);
                if(arr[i] != 0 &&  i % 2 == 0  )flag = true;
            }

            if(flag && sum % 3 == 0){
                cout << "red";
            }else cout << "cyan";



        }

        cout << endl;

    }


           
     
     
        
    return 0;
}
      
       