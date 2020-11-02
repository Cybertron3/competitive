#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
 
	ll t; sld(t);

	while(t--){
		int n , x;
		sd(n); sd(x);

		int maxel = pow(2 , n) - 1;

		int lev = 0 , st = 1;

		while(1){

			if(st == x)break;

			if(((maxel -1)/2) + st < x )st = st + ((maxel -1)/2) + 1;

			else st = st + 1;

			maxel = (maxel -1) / 2;

			lev++;

		}

		pd(lev);

	}           
           
     
     
        
    return 0;
}
