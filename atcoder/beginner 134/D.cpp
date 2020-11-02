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

	int n; sd(n);

	int arr[n+1];

	for(int i =1;i <=n ;i++){
		sd(arr[i]);
	}

	vector<int> ans;

	int b = 1;

	for(int i = 1 ; i<= n ;i++){
		
		
		int count = 0;
		for(int j = i ; j <= n ; j += i){
			if(arr[j] == 1)count++;
		}

		if(count % 2 == arr[i] % 2){
			if(arr[i] == 1)ans.push_back(i);
		}else{
			b = 0;
			break;


		}

	}

	if(b == 0)printf("-1\n");
	else{
		int siz = ans.size();
		pd(siz);

		for(int i = 0;i< siz ; i++)printf("%d ",ans[i] );
	}
           
    printf("\n");
     
     
        
    return 0;
}
