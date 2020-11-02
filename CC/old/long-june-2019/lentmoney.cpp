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

		int arr[n], xorr[n] ;

		set<pairs> diff; 

		for(int i = 0; i< n; i++) sd(arr[i]);

		int k , x; sd(k); sd(x);


		for(int i =0; i< n; i++){
			xorr[i] = arr[i] ^ x;
			pairs temp = make_pair(xorr[i] - arr[i] , i); 
			diff.insert(temp);
		}


		int unstableCount = 0;

		for(auto i = diff.begin() ; i< diff.end() ; i++){

			pairs temp = *i;
			if(temp.first > 0 )unstableCount++;
		}

		sort(diff , diff + n );

		for(auto i = diff.end() ; i>= diff.end() ; i++){

			pairs temp = *i;
			if(temp.first > 0 )unstableCount++;
		}





		


	}           
           
     
     
        
    return 0;
}
