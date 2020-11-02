//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

	string str[9];

	int n = 9;

	forn(i,0,n){
		cin >> str[i];
	}


	int i  , j;
	
	i = 0 ; j = 0;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i = 1 ; j = 3;

	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i = 2 ; j = 6;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i= 3 ; j =1;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i= 4 ; j = 4;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i = 5; j = 7;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i = 6; j = 2;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i = 7; j = 5;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	i = 8 ; j = 8;
	if(str[i][j] == '9')str[i][j] = '1';
	else str[i][j] = str[i][j] + 1;

	forn(i,0,9){
		cout << str[i] << endl;
	}
	




    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
