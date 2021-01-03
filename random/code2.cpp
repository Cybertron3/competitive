#include<bits/stdc++.h>
using namespace std;

int main(){

	std::vector<int> vec1(4,0);
	std::vector<int> vec2(4,0);
	std::vector<int>& vec3 = vec1 ;

	// vec1 = vec2;
	// vec2[1] = 5;
	// vec1 = vec2;

	vec3[1] = 5;
	cout << vec1[1] << "\n";

	return 0;
}