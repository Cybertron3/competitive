#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main(){
	int t;
	cin >> t;
	for(int i = 0; i< t ; i++){
		int a , b, c , d;
		cin >> a >> b >> c >> d;
		if(b==c)
			cout << b << " " << b << " " << b << endl;
		else{
			cout << b << " " << std::max(b , c-b+1) << " " << c << endl;

		}
	}
}