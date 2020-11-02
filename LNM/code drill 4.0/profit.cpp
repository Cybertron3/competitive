#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int chek(int a , int b){
	if(a > b)return 1;
	 return 2;
}

     
     
int main(){

	int n , x;

	sd(n); sd(x);

	int arr1[n] , arr2[n];

	ll sum1 = 0 , sum2 = 0;

	for(int i = 0; i< n ;i++){
		sd(arr1[i]);
		sum1 += arr1[0];
	}

	for(int i = 0; i< n ; i++){
		sd(arr2[i]);
		sum2 += arr2[0];
	}


	int belt ;

	ll ans = 0;
	int i = 0;

	for( ; i<n ;i++){
		if(arr1[i] < arr2[i]){
			belt=2;
			ans += arr2[i];
			i++;

			break;
		}else if(arr1[i] > arr2[i]){
			belt = 1;
			ans += arr1[i];
			i++;
			break;
		}else ans += arr1[i];
	}

	for(; i< n ; i++){
		if(belt == 1){
			if(arr1[i] > arr2[i] -x){
				ans += arr1[i];
			}else if(arr1[i] < arr2[i] - x){
				ans += (arr2[i] - x);
				belt = 2;
			}else {
				do{
					ans += arr1[i];
					i++;
				}while(i < n && arr1[i] == arr2[i]);
				belt = chek(arr1[i] , arr2[i] );
				i--;
			}

		}else if(belt == 2){
			if(arr1[i] - x < arr2[i] ) ans += arr2[i];
			else if(arr1[i] - x > arr2[i]){
				ans += (arr1[i] - x);
				belt = 1;
			}else {
				do{
					ans += arr2[i];
					i++;
				}while( i < n && arr1[i] == arr2[i]);
				belt = chek(arr1[i] , arr2[i] );
				i--;
			}
		}

		//cout << "ans = "<< ans << " , index = " << i << endl;

	}

	pld(ans);


           
     
     
        
    return 0;
}
