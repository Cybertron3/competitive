#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

struct query { 
    int start, end; 
}; 


void increment(int arr[], struct query q_arr[], int n);

          
int main(){

	int t; sd(t);

	while(t--){
		int n; sd(n);

		int rad[n+1] = {0}, health[n+1];

		struct query q_arr[n+1];

		int sum[n+1] = {0};

		int temp;

		for(int i = 1; i<= n; i++){
			sd(temp);
			q_arr[i].start = i - temp ;
			q_arr[i].end =  i + temp ;
		}

		for(int i = 1; i<= n; i++)	sd(health[i]);

			
		increment(rad , q_arr , n);

	//	for(int i = 1; i<= n ; i++)printf("%d \n",rad[i] );

		sort( rad + 1 , rad + (n +1));
		sort( health + 1, health + (n + 1));

		int check = 1;

		for(int i = 1; i<= n ;i++){
			//cout << "rad = " << rad[i] << " , health = "<< health[i] << " \n";
			//cout << "been here, ";
			if(rad[i] != health[i] ){
				check = 0;
				//cout<< "break ho gya\n";
				break;	
			}
			//cout << "done that\n";
			//cout << "rad = " << rad[i] << " , health = "<< health << " \n";
		}

		if(check == 1)printf("YES\n");
		else printf("NO\n");

	}
   
     
        
    return 0;
}


void increment(int arr[], struct query q_arr[], int n) { 
    int sum[n+1] = {0}; 

    for (int i = 1; i <= n; i++) { 

    	if(q_arr[i].start < 1)sum[1] += 1;
        else sum[q_arr[i].start] += 1; 


        if ((q_arr[i].end + 1) <= n) 
            sum[q_arr[i].end + 1] -= 1; 

    } 
  
    arr[1] += sum[1]; 
    for (int i = 2; i <= n; i++) { 
        sum[i] += sum[i - 1]; 
        arr[i] += sum[i]; 
    } 
} 