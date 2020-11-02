#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 
     
     
int main(){

	SPEED;

	string s; cin >> s;

	std::vector<char> v;

	char ch = s[0];
	v.push_back(s[0]);

	std::vector<int> num;

	int count = 1;

	for(int i = 1; i< s.size(); i++){
		if(s[i] == ch)count++;
		else{
			num.push_back(count);
			count = 1;
			v.push_back(s[i]);
			ch = s[i];
		}



	}

	num.push_back(count);

	int n = num.size() , i = 0;

	while(i < n){
		printf("%c%d",v[i] , num[i]  );
		i++;
	}
           
     
     
        
    return 0;
}
