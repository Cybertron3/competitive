#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 

ll prime(ll num);
     
     
int main(){

	int n; sd(n);

	int arr[n];

	ll prod = 1 , sum = 0;

	for(int i = 0; i< n ;i++){
		sd(arr[i]);
		prod *= arr[i];
	}



	for(int i = 0; i< n;i++){
		ll temp = prod / arr[i];

		sum = (sum + prime(temp)) % 1000000007;

	}



           
    pld(sum);
     
        
    return 0;
}

ll prime(ll num){
	ll count= 2;

	for(ll i = 2; i < num ; i++ ){		
		if(num % i == 0 )count++;
	}


	return count;

}