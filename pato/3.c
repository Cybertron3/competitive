#include<stdio.h>

int main(){

	int i , num , maximum  , numOfappearance = 0 ;

	printf("Enter num1 : " );
	scanf("%d" , &num);
	
	maximum = num;
	numOfappearance = 1;


	for(i = 2 ; i <= 10 ; i++ ){
		printf("Enter num : ");
		scanf("%d" , &num);

		if(num > maximum){
			maximum = num;
			numOfappearance = 1;
		}else if( num == maximum){
			numOfappearance++;
		}

	}


	printf("maximum num is :%d . \n",maximum );
	printf("number appearance is %d. \n",numOfappearance);



	return 0;
}