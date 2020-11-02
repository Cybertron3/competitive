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

    int t; cin >> t;

    while(t--){
        string str , hash ;
        cin >> str >> hash;

        int arr[26] = {0};

        int n = str.size();

        forn(i,n){
            arr[str[i]-'a']++;
        }

        int m = hash.size();

        bool flag = false;

        forn(i,m-n+1){
            if(arr[hash[i] - 'a'] != 0){

                bool flag1 = true;

                int temp[26] = {0};
                for(int j = i + 0 ; j < i + n ; j++){
                    if(arr[hash[j]-'a'] == 0){
                        flag1 = false;
                        break;
                    }

                    temp[hash[j] - 'a']++;

                }

                if(!flag1)continue;

                bool flag2 = true;

                forn(j,26){
                    if(temp[j] != arr[j])flag2 = false;
                }
                if(flag2){
                    flag = true;
                    break;
                }
            }
        }

        if(flag)cout << "YES" << endl;
        else cout << "NO" << endl;

    }


           
     
     
        
    return 0;
}
      
       