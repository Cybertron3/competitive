#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

bool isprime(ll n) 
{ 
    
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

bool fun(ll num){

	if (num < 4)return false;

	ll temp = floor(sqrt(num));

	if(temp * temp == num){
		return isprime(temp);
	}

	return false;

}
     
     
int main(){

	int n; cin >> n;

	ll num[n];
	for(int i = 0 ; i<n ; i++)sld(num[i]);

	for(int i = 0; i< n ; i++){

		

		if(fun(num[i]))printf("YES\n");
		else printf("NO\n");

	}
       
    return 0;
}
