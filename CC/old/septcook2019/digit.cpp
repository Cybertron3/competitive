#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
//#define moder 1000000007



    
int main(){

	int t; sd(t);

	while(t--){

		ll a , b; 

		sld(a); sld(b);

		ll sum = a + b;

		int arr[10] = { 6 , 2 , 5  ,5 , 4 , 5 , 6 , 3 , 7 , 6 };

		ll ans = 0;

		while(sum != 0){

			ans += arr[sum% 10];
			sum = sum / 10 ; 

		}

		pld(ans);


	}


           
     
     
        
    return 0;
}
