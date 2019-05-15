#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
	
	int x , y , n;

	sd(n); sd(x); sd(y);

	
	string arr;

	cin >> arr;            

	           


	int i = n - x  ,j = n -1 , ans = 0;

	if(arr[n-y-1] == 48)ans++;
	//else cout << " n-y-1 toh sahi hai\n";

	for( ; j>= i ; j--){
		if(j != n - y -1 && arr[j] != 48 ) ans++; 
		//else cout << arr[j] << " j = " << j << " ka kaam toh sahi tha, no change \n";
	}

           
     pd(ans);
     
        
    return 0;
}
