#include<stdio.h>

int main(){
	int n ; 
	printf("Enter n: ");
	scanf("%d" , &n);

	int pal , rev;

	for(int i = 0; i <= n ; i++){
		pal = i;
		rev = 0;
		while(pal > 0){
			rev = rev * 10 + (pal % 10);
			pal = pal / 10;
		}

		if(rev == i){
			printf("%d is a palindrome.\n",i);
		}

	}

	printf("END\n");

	return 0;
}