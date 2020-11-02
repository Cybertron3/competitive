#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 
     
     
int main(){

	int n,k; sd(n); sd(k);

	int arr[n];

	for(int i = 0; i< n ;i++){
		sd(arr[i]);
	}

	int i = 0;

	ll sum = 0 , ans ;

	for( ; i < k; i++){
		sum += arr[i];
	}

	ans = sum;

	for(; i < n ; i++ ){
		sum += arr[i] - arr[i-k]; 

		if(ans < sum)ans = sum;
	}

	pld(ans);
           
     
     
        
    return 0;
}
