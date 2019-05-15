//Interactive question

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int func(int n1, int n2, int arr[] );
     
     
int main(){
	

	int numarr[] = { 42 , 23 , 16, 15 ,8 ,4 };


	int arr[7],num1, num2;

	printf("? 1 1\n");
	fflush(stdout);
	sd(arr[1]);

	printf("? 2 2\n");
	fflush(stdout);
	sd(arr[2]);

	for(int i = 0 ;i < 6 ;i++){
		if(numarr[i] == arr[1])numarr[i] = 0;
	}

	for(int i = 0 ;i < 6 ;i++){
		if(numarr[i] == arr[2])numarr[i] = 0;
	}
	
	


	/*
	printf("? 2 2\n");
	fflush(stdout); //flush 
	sd(num1);

	printf("? 2 3\n");
	fflush(stdout);
	sd(num2);

	arr[2] = func(num1 , num2);

	arr[1] = num1/arr[2];
	arr[3] = num2/arr[2];
	*/
	printf("? 3 4\n");
	fflush(stdout); //flush 
	sd(num1);

	printf("? 4 5\n");
	fflush(stdout);
	sd(num2);

	arr[4] = func(num1 , num2 , numarr );

	arr[3] = num1/arr[4];
	arr[5] = num2/arr[4];

	

/*	printf("? 4 4\n");
	fflush(stdout);
	sd(arr[4]);

	printf("? 5 5\n");
	fflush(stdout);
	sd(arr[5]);
*/
	arr[6] = 108 - arr[1] - arr[2] - arr[3] - arr[4] - arr[5];
	


	printf("! ");

	for(int i = 1; i<= 6 ; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");

	fflush(stdout);
     
        
    return 0;
}


int func(int n1, int n2, int arr[])
{
	int i = 0;
	//int arr[] = { 42 , 23 , 16, 15 ,8 ,4 };

    while(1){
    	if(arr[i] != 0 && n1 % arr[i] == 0 && n2 % arr[i] == 0)break;
    	i++;
    }

    return arr[i];
}