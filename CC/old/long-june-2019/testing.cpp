#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

typedef pair<int, int> pairs; 
     
     
int main(){

	int t; sd(t);

	while(t--){
		int n ; sd(n);

		ll arr[n], xorr, diff[n]; 

		for(int i = 0; i< n; i++) sld(arr[i]);

		int k , x; sd(k); sd(x);

		//cout << "input completed\n";

		for(int i =0; i< n; i++){
			xorr = arr[i] ^ x;
			diff[i] = xorr - arr[i] ;
		}

		//cout << "diff calculated\n" ;
			


		int unstableCount = 0;

		for(int i = 0; i< n ; i++){
			if(diff[i] > 0 )unstableCount++;
		}

		//cout << "unstableCount = " << unstableCount << endl;


		int num = 0;

		if(k <= n ){
			num = unstableCount / k;
			num = num * k ;
		}

		sort(diff , diff + n);

		//cout << "sorted\n";
		
		int i ;

		ll sum  =0;

		for(i= n-1 ; i >= n - num; i--){
			sum += diff[i] ;	
		
		}

		//cout << "first loop for sum completed\n";

		ll tempsum = 0;

		if( (unstableCount % k != 0) &&( num + k <= n)){
			for( int j = 0; j <  k; j++ ){
				tempsum += diff[i - j];
			} 
		}

		//cout << "2nd loop for tempsum completed\n";

		if(tempsum > 0) sum += tempsum;


		for(int i = 0; i< n; i++)sum += arr[i];

		
		pld(sum);
		


	}           
           
     
     
        
    return 0;
}
