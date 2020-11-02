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
	int arr[n], diff = 0;

	int ans = -1,max = 0, min = 101;

	for(int i= 0; i< n; i++){
		sd(arr[i]);

		if(arr[i]> max)max =arr[i];
		else if(arr[i] < min)min = arr[i];


	}


	ans = (max - min) ;
	if(ans % 2== 0) ans = ans / 2;

	if (max == min) ans = 0;

	for (int i = 0; i < n; i++){

			if (arr[i] == max || arr[i] == min || arr[i] + ans == max)
				continue;

			else
			{
				ans = -1;
				break;
			}
		}
	 

    pd(ans);

	return 0;
}
