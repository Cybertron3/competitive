#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int t; sd(t);

	while(t--){
		int x , y , k; sd(x); sd(y); sd(k);

		ll tot = x + y;

		tot = tot / k;

		if(tot % 2 == 0)printf("Chef\n");
		else printf("Paja\n");

	}
           
     
     
        
    return 0;
}
