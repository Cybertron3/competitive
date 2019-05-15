#include<bits/stdc++.h>
using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int main(){

	int arr[4],max = 0;

	for(int i = 0 ; i < 4 ; i++){
	
		sd(arr[i]);
		if(arr[i]> max)max = arr[i];
	}

    int t;
	for (int i = 0; i < 4; i++){
		t = max - arr[i];
		if(t != 0)printf("%d ",max - arr[i]);
	}

		return 0;
}
