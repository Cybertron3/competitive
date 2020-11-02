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

bool ispal(string str , int x , int y){
	x--;y--;

	while(x < y){
		if(str[x++] != str[y--])return false;
	}

	return true;
}

int main(){
    SPEED;

    string str;
    cin >> str;

    int n = str.size();

    if(n%2 == 0){
    	cout << "No" << endl;
    }else{

    	if(ispal(str , 1,n) && ispal(str ,1,(n-1)/2 ) && ispal(str ,(n+3)/2 , n )  ){
    		cout << "Yes" << endl;
    	}else cout << "No" << endl;

    }

    
    return 0;
}
      
       
