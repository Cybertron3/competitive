#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int r , d ; 

	ll x , xnext;

	sd(r); sd(d); sld(x);

	for(int i = 2001 ; i <= 2010 ; i++){
		xnext = r*x - d;
		x = xnext;
		pld(xnext);
	}           
           
             
    return 0;
}
