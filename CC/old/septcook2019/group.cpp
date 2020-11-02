#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define mode 1000000007

ll moder( ll x , ll y ){
    // cybertrone
    // for x % y

    ll ans = x % y;

    if(ans < 0)ans = ans + x ;

    return ans ;

}


    
int main(){

	int t; sd(t);

	while(t--){

		ll a , b , c;
		sld(a); sld(b); sld(c);

		ll sum = a + (2*b) + (3*c);

		if(sum % 2 == 1)printf("NO\n");
		else{
			sum /= 2;

			ll temp = sum / 3;

			if(temp <= c ){
				if(sum % 3 == 0)sum = 0;
				else{
					sum = sum - (3*temp);
				}
			}else{
				sum = sum - (c*3);
			}

			temp = sum / 2;

			if(temp <= b){
				if(sum % 2==0)sum = 0;
				else{
					sum = sum - (2*temp);
				}

			}else{
				sum = sum - 2*b;
			}

			if(sum <= a){
				sum = 0;
			}

			if(sum == 0){
				printf("YES\n");
			}else printf("NO\n");


		}
	}


           
     
     
        
    return 0;
}
