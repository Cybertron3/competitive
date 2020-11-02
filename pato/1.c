#include <stdio.h>

int main(){
	int fivedigitNum , singleDigitNum ;

	printf("Enter five digit number: ");
	scanf("%d",&fivedigitNum);
	printf("Enter one digit number: ");
	scanf("%d" ,&singleDigitNum);

	int i  = 1 , lastnumber;

	int howManyTimes = 0;

	while(i <= 5){
		/*
			when 23454 is divided by 10 , 4 is remiander,
			when 23454 is divide by 10 , it becomes 2345 ,
			 then by it by dividing  10 gives 5 as remaider.
			 which is the next term	
		*/

		lastnumber = fivedigitNum % 10;
		if(singleDigitNum == lastnumber){
			howManyTimes++;

		}

		i++;
		fivedigitNum = fivedigitNum / 10;

	}

	printf("Ques : How many times are they equal: % d .",howManyTimes);

return 0;

}