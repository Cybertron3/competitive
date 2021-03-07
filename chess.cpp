#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll, ll>;


//pairs
#define ss second
#define ff first


// vectors
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down



// void changer(char arr[8][8] , int x , int y , char ch){
// 	if( x < 8 && x >= 0 && y >= 0 && y < 8){
// 		arr[x][y] = ch;
// 	}
// }

// bool valid (int x , int y){
// 	if( x < 8 && x >= 0 && y >= 0 && y < 8){
// 		return true;
// 	}
// 	return false;
// }

// bool fun( char arr[8][8] , int x , int y){
// 	if( x < 8 && x >= 0 && y >= 0 && y < 8){
// 		if(arr[x][y] != 'a' && arr[x][y] != 'k'){
// 			return true;
// 		}
// 	}

// 	return false;
// }

// vector<int> nin(string king , string ninja){
// 	int y1 = king[0] - 'a' , x1 = king[1] - '0';
// 	int y2 = ninja[0] - 'a' , x2 = ninja[1] - '0';
// 	x1 = 9 - x1;
// 	x2 = 9 - x2;
// 	x1--; x2--;

// 	char arr[8][8];


// 	for(int i = 0; i < 8 ; i++){
// 		for(int j = 0; j < 8; j++){
// 			arr[i][j] = '#';
// 		}
// 	}

		

// 	for(int i = x2+1; i < 8 ; i++){
// 		if(i == x1 && y2 == y1)break;
// 		arr[i][y2] = 'a';
// 	}
// 	for(int i = x2 - 1; i >= 0; i--){
// 		if(i == x1 && y2 == y1 )break;
// 		arr[i][y2] = 'a';
// 	}

// 	for(int i = y2 + 1 ; i < 8; i++){
// 		if(x2 == x1 && i == y1)break;

// 		arr[x2][i] = 'a';
// 	}
// 	for(int i = y2 - 1; i >= 0; i-- ){
// 		if(x2 == x1 && i == y1)break;
// 		arr[x2][i] = 'a';

// 	}

// 	int i = x2 -1, j = y2-1;

// 	while(i >= 0 && j >= 0){
// 		if(i == x1 && j == y1)break;
// 		arr[i][j] = 'a';
// 		i--; j--;
// 	}

// 	i = x2-1 ; j = y2+1; 
// 	while(i >= 0 && j < 8){
// 		if(i == x1 && j == y1)break;

// 		arr[i][j] = 'a';
// 		i--;j++;
// 	}

// 	i = x2 + 1; j = y2 +1 ;
// 	while(i < 8 && j < 8){
// 		if(i == x1 && j == y1)break;

// 		arr[i][j] = 'a';
// 		i++; j++;
// 	}

// 	i = x2 + 1; j = y2 - 1;
// 	while(i < 8 && j >= 0){
// 		if(i == x1 && j == y1)break;

// 		arr[i][j] = 'a';
// 		i++; j--;
// 	}



// 	changer(arr , x2 + 2  , y2 + 1 , 'a');
// 	changer(arr , x2 + 2 , y2 - 1  , 'a') ; 
// 	changer(arr , x2 - 2 , y2 + 1 , 'a') ;
// 	changer(arr , x2 - 2 , y2 - 1 , 'a'); 

// 	changer(arr , x2 + 1 , y2 + 2 , 'a');
// 	changer(arr , x2 + 1  , y2 - 2 , 'a');
// 	changer(arr , x2 - 1 , y2 + 2 , 'a');
// 	changer(arr , x2 - 1  , y2 - 2 , 'a');

	

// 	arr[x1][y1] = 'k';
// 	if(x1 + 1 < 8)arr[x1+1][y1] = 'k';
// 	if(x1 - 1 >= 0)arr[x1-1][y1] = 'k';
// 	if(y1 - 1 >= 0)arr[x1][y1-1] = 'k';
// 	if(y1 + 1 < 8)arr[x1][y1+1] = 'k';

// 	if(x1+ 1 < 8 && y1 + 1 < 8)arr[x1+1][y1+1] = 'k';
// 	changer(arr , x1+1  , y1-1 , 'k');
// 	changer(arr , x1-1 , y1 -1 , 'k');
// 	changer(arr , x1 - 1 , y1+1 , 'k');

// 	// arr[x2][y2] = 'k';

// 	for(int i = 0; i < 8 ; i++){
// 		for(int j = 0; j < 8 ; j++){
// 			cout << arr[i][j] << " ";
// 		}
// 		cout << "\n";
// 	}


// 	// arr[x2][y2] = 'q';

// 	vector<int> ans(4 , 0);

// 	for( i = 0; i < 8 ; i++){
// 		for(int j = 0 ; j < 8 ; j++){
// 			if(arr[i][j] == 'k' || (i == x2 && j == y2 ) )continue;
// 			if(arr[i][j] == 'a'){
// 				if(fun(arr , i+1 ,j ) || fun(arr , i-1 , j) ||
// 				fun(arr, i , j+1) || fun(arr , i , j-1) ||
// 				fun(arr , i+1 , j+1) || fun(arr , i+1 , j-1 ) || 
// 				fun(arr , i-1 , j-1) || fun(arr , i-1 , j+1)){

// 					ans[1]++;




// 				}else{
// 					ans[0]++;
// 					cout << i+1 << " " << j+1  << "\n";
// 				}
				
// 			}else{

// 				if(fun(arr , i+1 ,j ) || fun(arr , i-1 , j) ||
// 				fun(arr, i , j+1) || fun(arr , i , j-1) ||
// 				fun(arr , i+1 , j+1) || fun(arr , i+1 , j-1 ) || 
// 				fun(arr , i-1 , j-1) || fun(arr , i-1 , j+1)){

// 					ans[3]++;


// 				}else{
// 					ans[2]++;
// 				}



// 			}
// 		}
// 	}

// 	FOR(i,0,4){
//     	cout << ans[i] << "  ";
//     }

// 	return ans;


// }
std::vector<int>  ninjaChess2021(string king, string ninja) {
    int save=0,check=0,checkmate=0,stale=0;
    int mat[8][8]; 
    int kcol = king[0]-'a';
    int krow = 8-(king[1]-'0');
    int ncol = ninja[0]-'a';
    int nrow =  8-(ninja[1]-'0');
    int visking[8][8]; 
    memset(visking , 0 , sizeof(visking));
   	memset(mat , 0 ,sizeof(mat));
   	mat[krow][kcol]=1;
   	
        if(krow-1>=0 )
        {
            if(kcol-1>=0)
            visking[krow-1][kcol-1]=1;
            visking[krow-1][kcol]=1;
        }
        if(krow-1>=0 && kcol+1<8)
            visking[krow-1][kcol+1]=1;
        if(kcol-1>=0)
            visking[krow][kcol-1]=1;
        if(kcol+1<8)
            visking[krow][kcol+1]=1;
        if(krow+1<8 && kcol-1>=0)
            visking[krow+1][kcol-1]=1;
        if(krow+1<8)
            visking[krow+1][kcol]=1;
        if(krow+1<8 && kcol+1<8)
            visking[krow+1][kcol+1]=1;
        int visnin[8][8] ;
        memset(visnin , 0 , sizeof(visnin));
   		
   		// mat[nrow][ncol]=1;
        // for(int i=0;i<8;i++)
        // {
        //     visnin[nrow][i]=1;
        //     visnin[i][ncol]=1;
        // }
        for(int i=nrow+1;i<8;i++)
        {
            if(i==krow && ncol==kcol)
                break;
            else visnin[i][ncol]=1;
        }
        for(int i=nrow-1;i>=0;i--)
        {
            if(i==krow && ncol==kcol)
                break;
            else visnin[i][ncol]=1;
        }
        for(int i=ncol+1;i<8;i++)
        {
            if(i==kcol && krow==nrow)
                break;
                else visnin[nrow][i]=1;
        }
         for(int i=ncol-1;i>=0;i--)
        {
            if(i==kcol && krow==nrow)
                break;
                 else visnin[nrow][i]=1;
        }
        
    int dir[][2] = {{-1,2},{-1,-2},{-2,1},{-2,-1},{1,2},{1,-2},{2,1},{2,-1}};
    
    for(int i=0;i<8;i++)
    {
        int a = nrow+dir[i][0];
        int b = ncol+dir[i][1];
        if(a>=0 && b>=0 && a<8 && b<8)
        	visnin[a][b]=1;
    }
int x=0;
while(nrow-x>=0 && ncol-x>=0)
{
    if(nrow-x==krow && ncol-x==kcol)
    break;
    visnin[nrow-x][ncol-x]=1;
    x++;
}
x=0;
while(nrow+x<8 && ncol+x<8)
{
     if(nrow+x==krow && ncol+x==kcol)
    break;
    visnin[nrow+x][ncol+x]=1;
    x++;
}
x=0;
while(nrow-x>=0 && ncol+x<8)
{
    if(nrow-x==krow && ncol+x==kcol)break;
    visnin[nrow-x][ncol+x]=1;
    x++;
}
x=0;
while(nrow+x<8 && ncol-x>=0)
{
    if(nrow+x==krow && ncol-x==kcol)break;
    visnin[nrow+x][ncol-x]=1;
    x++;
}
int dir1[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

visnin[nrow][ncol] = 0;

for(int i=0;i<8;i++)
{
    for(int j=0;j<8;j++)
    
    {
        if((i==krow && j==kcol) || (i==nrow && j==ncol))
            continue;
        if(i==krow+1)
        {
            if(j==kcol-1 || j==kcol+1 || j==kcol)continue;
        }
        if(i==krow-1)
        if(j==kcol-1 || j==kcol+1 || j==kcol)continue;
        if(i==krow)
        if(j==kcol-1 || j==kcol+1)continue;

    	// if(visking[i][j] == 1)continue;

        if(visking[i][j]!=1 && visnin[i][j]!=1)
        {
            bool saveflag=false;
            for(int k=0;k<8;k++)
            {
                int a = i+dir1[k][0];
                int b = j+dir1[k][1];
                if(a>=0 && b>=0 && a<8 && b<8 && visking[a][b]!=1 && visnin[a][b]!=1)
                {
                    saveflag=true;
                    break;
                }
            }
            if(saveflag)
            save++;
            else stale++;
            
        }
        else{
             bool saveflag=false;
            for(int k=0;k<8;k++)
            {
                int a = i+dir1[k][0];
                int b = j+dir1[k][1];
                if(a>=0 && b>=0 && a<8 && b<8 && mat[a][b]!=1 && visking[a][b]!=1 && visnin[a][b]!=1)
                {
                    saveflag=true;
                    break;
                }
            }
            if(saveflag)
            check++;
            else checkmate++;
        }
    }
}

// for(int i = 0; i < 8 ; i++){
// 	for(int j = 0; j < 8; j++){
// 		cout << visnin[i][j] << " ";
// 	}
// 	cout << "\n";
// }

// cout << "\n";

// for(int i = 0; i < 8 ; i++){
// 	for(int j = 0; j < 8; j++){
// 		cout << visking[i][j] << " ";
// 	}
// 	cout << "\n";
// }

	vector<int> ans(4 , 0);
	ans[0]=checkmate;
	ans[1]=check;
	ans[2]=stale;
	ans[3]=save;
	return ans;

}


void solve() {

    string king , queen;

    cin >> king >> queen;

    vector<int> ans = ninjaChess2021(king , queen);
    
    FOR(i,0,4){
    	cout << ans[i] << "  ";
    }

    // cout << "sgsfgs\n";

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);




    #ifndef ONLINE_JUDGE
        freopen("/home/ankitesh/Desktop/competitive/input.txt", "r", stdin);
        freopen("/home/ankitesh/Desktop/competitive/output.txt", "w", stdout);
    #endif

    // time_t start , end;

    // time(&start);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


