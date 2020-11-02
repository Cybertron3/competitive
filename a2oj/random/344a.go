package main

import(
	"fmt"
)

func main(){

	n , inp := 0 , 0

	fmt.Scan(&n)
	fmt.Scan(&inp)
	ans , last :=1, inp% 10


	for i:= 0 ; i < n-1 ; i++ {
		fmt.Scan(&inp)
		if inp/10 == last {
			ans++
		}

		last = inp % 10

	}
	
	fmt.Print(ans)


}