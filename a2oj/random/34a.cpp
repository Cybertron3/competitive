#include<bits/stdc++.h>
using namespace std;

int diff(int n , int m){
	return (n>m) ? n-m : m -n ;
}

int main(){

	int n; 

	scanf("%d",&n);

	int arr[n];

	for(int i = 0; i<n ; i++){
		scanf("%d",&arr[i]);
	}

	int min = diff(arr[0], arr[n-1]);
	int f = n-1;

	for(int i = 0; i< n-1; i++){
		if(diff(arr[i] , arr[i+1]) < min){
			min = diff(arr[i], arr[i+1]);
			f = i ;
			
		}
	}

	printf("%d %d\n", (f%n) + 1 , ((f+1)%n) + 1);

	return 0;

}