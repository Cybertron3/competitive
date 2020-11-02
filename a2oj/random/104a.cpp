#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

     
int main(){

	int n; sd(n);

	n = n - 10 ;

	int ans = 0;

	

	if( n == 10 ){
		ans = 15;
	}else if( n > 0 && n <= 11){
		ans = 4;
	}

	pd(ans);
           
     
     
        
    return 0;
}
