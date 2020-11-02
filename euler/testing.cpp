#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	ll num = 1000000000000000000 , chek = 1;

	for(int i = 2; chek < num ; i++){
		chek *= i;
		pld(chek);

	}


           
     
     
        
    return 0;
}
