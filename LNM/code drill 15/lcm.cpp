/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i,n) for(int i = 0; i < n ; i++)
#define moder 1000000007

ll hcf(ll n1, ll n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}


int main(){
    
    int n; cin >> n;
    
    ll inp;
    
    ll lcm = 1, temp;;
    
    forn(i,n){
        cin >> inp;
        temp = inp/ hcf(lcm , inp);
        lcm = (lcm * temp)%moder;

        cout << " lcm  = " << lcm << " , temp = " << temp << endl;
        
    }
    
    cout << lcm << endl;
    
    return 0;
    
}