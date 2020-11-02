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

	for(int i =0 ;i < n; i++){
		sd(arr[i]);
	}

	int max = 0;

	for(int i =0; i<n ;i++){
		if(arr[i] > arr[max]){
			max = i;
			
		}
	}

	int min = n-1;

	for(int i = n-1; i>= 0; i--){
		if(arr[i] < arr[min] ){
			min = i;
			
		}
	}

	int maxidx = -1, minidx= -1;

	for(int i = 0; i< n ;i++){
		if(arr[i] == arr[max]){
			maxidx = i;
			break;
		}
	}

	for(int i = n-1; i>= 0; i--){
		if(arr[i] == arr[min] ){
			minidx = i;
			break;
			
		}
	}


	if(minidx < maxidx)minidx++;

	ll  ans = (ll) maxidx + n - 1 - minidx;

	pld(ans);
           
     
     
        
    return 0;
}
