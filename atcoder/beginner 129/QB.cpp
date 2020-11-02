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

	int AllSum = 0 , tSum = 0, arr[n] , min = 10000000;

	for(int i = 0; i< n; i++){
		sd(arr[i]);
		AllSum += arr[i];
	}           

	for(int i =0 ; i< n; i++){
		tSum += arr[i] ;
		int temp = AllSum - tSum;

		int diff = temp - tSum;

		if(diff < 0)diff = -1 * diff;

		if(diff < min)min = diff;


	}
           
     
     pd(min);
        
    return 0;
}
