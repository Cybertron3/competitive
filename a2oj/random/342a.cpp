#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007
#define pb push_back
#define forn(i,st,n) for(int i = st; i < n ; i++)

ll moding( ll x , ll y ){
    // cybertrone
    // for x % y

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

    int n; sd(n);

    int arr[n];

    for(int i = 0; i< n ; i++)sd(arr[i]);

    int count[8] = {0};

    for(int i = 0; i< n ; i++){
        count[arr[i]]++;
    }

    bool flag = true;


    std::vector<int> ans;
    // for 3
    count[6] -= count[3];
    count[1] -= count[3];

    for(int i = 0; i< count[3] ; i++){
        ans.pb(1);
        ans.pb(3);
        ans.pb(6);
    }

    count[3] = 0;

    if(count[6]<0 || count[1] < 0)flag = false;

    if(flag){
        count[2] -= count[4];
        count[1] -= count[4];

        for(int i = 0; i< count[4] ; i++){
            ans.pb(1);
            ans.pb(2);
            ans.pb(4);
        }

        count[4] = 0;

    }

    if(count[2]<0 || count[1] < 0)flag = false;

    if(flag){

        count[2] -= count[6];
        count[1] -= count[6];

        for(int i = 0; i< count[6] ; i++){
            ans.pb(1);
            ans.pb(2);
            ans.pb(6);
        }

        count[6] = 0;
    }


    forn(i,1,8){
        if(count[i]!=0){
            flag = false;
            break;
        }
        //cout << i <<"  "  << count[i ]<< endl;
    }

    if(!flag)cout << -1<< endl;
    else {
        forn(i , 0 , n){
            cout << ans[i] << " " << ans[i+1] << " " << ans[i+2] << endl;
            i = i + 2; 
        }
    }

  

           
     
     
        
    return 0;
}


