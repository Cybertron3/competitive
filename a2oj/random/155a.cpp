#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


int main(){

	int i = 0, n; sd(n);

	int arr[n];

	for(int i = 0; i< n ;i++)sd(arr[i]);

	int min = arr[0] , max = arr[0];

	int ans = 0;

	while(++i < n ){
		if(arr[i] > max){
			max = arr[i];
			ans++;
		}else if(arr[i] < min){
			min = arr[i];
			ans++;
		}

	}

	pd(ans);
           
     
     
        
    return 0;
}
