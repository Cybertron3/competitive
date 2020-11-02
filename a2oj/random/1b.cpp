//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void one(string arr , int x){
	int row = 0 , col = 0;
	nfor(i,arr.size() - 1 , x){
		col = col *10 + (arr[i]-'0');
	}

	nfor(i,x-2,1){
		row = row*10 + (arr[i] - '0');
	}

	

}


int main(){
    SPEED;

    int n; cin >> n;

    while(n--){
    	string str;
    	cin >> str;

    	int i,len = str.size();

    	if(str[0]=='R'){
    		i = 1;
    		while( i < len && str[i]<= '9' && str[i] >= '0')i++;

    		if(i < len && str[i]=='C' && i > 1) one(str , i+1);
    		else two(str);
    	}else two(str);

    


    }

    
    return 0;
}
      
       
