#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int n; sd(n);

	string s1,s2;

	cin >> s1;
	cin >> s2;

	int arr1[26] = {0};
	int arr2[26] = {0};

	for(int i = 0; i< n ; i++){
		arr1[s1[i] - 97] += 1; 
	}

	for(int i = 0; i< n ; i++){
		arr2[s2[i] - 97] += 1; 
	}

	int check = 1;

	for(int i = 0 ; i < 26 ; i++){
		if(arr1[i] != arr2[i]){
			check = 0; 
			break;
		}
	}

	if(check == 1) printf("Yes\n");
	else printf("No\n");
	
     
        
    return 0;
}
