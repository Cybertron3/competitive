#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int a,b;
	sd(a); sd(b);

	if(a>=13)pd(b);
	else if(a <= 12 && a >=6)pd(b/2);
	else printf("0\n");            
                   
    return 0;
}
