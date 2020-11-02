#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
	
	int n; sd(n);
	int arr[n];

	for(int i = 0; i< n; i++) sd(arr[i]);

	sort(arr , arr + n);
	int b= 1 ; // to check
	
	for(int i = 0; i < n; i++){
		if(arr[i] >= b  ){
			b++;
		} 
	} 
           
    pd(b-1);
      
    return 0;
}
