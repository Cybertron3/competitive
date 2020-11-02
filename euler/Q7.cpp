#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	int n = 2000000;

	std::vector<int> arr(n , 1);

	ll count = 0,ans;

	for(int i = 2; i< n ; i++){
		if(arr[i] == 1){
			count++;

			if(count == 10001){
				ans = i;
				break;
			}
			
			for(int j = 2; j * i <  n ; j++ ){
				arr[j*i] = 0;

			}
		}



	}

	pld(ans);

           
     
     
        
    return 0;
}
