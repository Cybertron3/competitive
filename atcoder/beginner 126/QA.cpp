#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
    int n , k;
    sd(n); sd(k);

    string s;
    cin >> s;

    s[k-1] = s[k-1] + 32 ;        
     
     cout << s  << endl;
        
    return 0;
}
