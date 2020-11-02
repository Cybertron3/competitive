
// from a scalar

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007

ll moding( ll x , ll y ){
   
    ll ans = x % y;

    if(ans < 0)ans = ans + x ;

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




int main(){

    string s1 , s2, s3;

    cin >> s1 >> s2 >> s3;

    int arr[26] = {0};

    for(int i = 0; i< s1.size() ; i++){
        arr[s1[i] - 'A']++;
    }

    for(int i =0; i< s2.size() ; i++){
        arr[s2[i] - 'A']++;
    }

    for(int i = 0; i< s3.size() ; i++){
        arr[s3[i] - 'A']--;
    }


    bool flag = true;

    for(int i = 0; i < 26 ; i++){
        if(arr[i] != 0){
            flag = false;
            break;

        }
    }


    if(flag)printf("YES\n");
    else printf("NO\n");


        
    return 0;
    
}
