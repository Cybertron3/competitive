#include<bits/stdc++.h>
using namespace std;

int LCM(int x , int y);
int gcd(int , int);
int main(){

	int n;
	scanf("%d",&n);

	int arr[n];

	for(int i = 0; i< n ; i++) scanf("%d",&arr[i]);

	int min = arr[0], j = 0 , k , max =arr[0];

	for(int i = 1 ;i < n; i++){
		if(min > arr[i]){ 
			min = arr[i];
			j = i;
			
		}	
		if(max < arr[i]) max = arr[i];
		
	}

	arr[j] = -1;

	int lcm[n];

	for(int i = 0 ; i< n ;i++){
		lcm[i]= LCM(arr[i] , min);
	}

	min = max;

	for(int i = 1; i< n ; i++){
		if(min > lcm[i] && lcm[i] >0){
			min = lcm[i];
			k = i; 


		}
	}

	printf("%d %d",j+1 , k+1);

	return 0;
}

int LCM(int x , int y){
	if(x < 0)return -1;
	x = x / gcd(x , y) ;
	return y*x;
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 

} 