#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int n ; sd(n);
	int arr[n];

	sd(arr[0]);
	ll sum = 0;

	for(int i = 1 ; i< n ;i++){
		sd(arr[i]);
		if(arr[i] <= arr[i-1]) {
			sum += arr[i -1] + 1 - arr[i];
			arr[i] = arr[i-1] + 1;
			//cout << sum << endl;
		}		

	}           

/*	ll rsum = n * a;

	rsum += (n*(n-1))/2;

	rsum = rsum-sum;

	pld(rsum);           
     
 */

	pld(sum);

        
    return 0;
}
