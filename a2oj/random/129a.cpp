#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define dracarys(x) printf("%d\n",x)

     
int main(){

	int n; sd(n);

	int arr[n];

	ll  even = 0, odd = 0;

	for(int i = 0; i< n ;i++){
		sd(arr[i]);

		if(arr[i] % 2 == 0)even++;
		else odd++;
	}

	ll ans = 0;

	if(odd % 2 == 1)ans = odd;
	else{
		ans = even  ;
	}


	//ll ans = pow(2.0 , even + odd );



	pld(ans);
           
     
     
        
    return 0;
}
