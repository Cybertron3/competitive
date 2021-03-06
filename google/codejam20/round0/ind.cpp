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

std::vector<std::vector<int> > v;

void storing(int arr[], int size){
    int i,j;
    std::vector<int> x;
    for(i=0; i<size; i++)
    {
    	x.pb(arr[i]);
        
    }
    v.pb(x);
}

//function to swap the variables
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//permutation function
void permutation(int *arr, int start, int end){
    if(start==end){
        storing(arr, end+1);
        return;
    }
    
    forn(i , start ,end+1){
        
        swap((arr+i), (arr+start));
        
        permutation(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}




int main(){
    SPEED;

    //cout << "market me naya hai" << endl;

    int i = 0,  t; cin >> t;

    while(i++ < t){
    	cout << "Case #" << i << ": ";



    	int n , k; 
    	cin >> n >> k;

    	int arr[n][n];

    

		forn(i,0,n){
			int num = i;
			forn(j,0,n){
				arr[i][j] = (num % n) + 1 ;
				num++;
			}
			
		}

    	

		int idx[n];

		forn(i,0,n)idx[i] = i;

		permutation(idx, 0, n-1);


		int ansdx = -1;

		forn(i,0,v.size()){
			ll sum = 0;
			forn(j,0,n){
				sum += arr[v[i][j]][j];
				
			}

			if(sum == k){
				ansdx = i;
				break;
			}

		}


		if(ansdx == -1){
			

			forn(i,0,n){
				int num = n-i;
				forn(j,0,n){
					if(num < 1)arr[i][j] = (num + n )  ;
					else arr[i][j] = num ;
					num--;
				}
			
			}

			


			forn(i,0,v.size()){
				ll sum = 0;
				forn(j,0,n){
					sum += arr[v[i][j]][j];
					
				}

				if(sum == k){
					ansdx = i;
					break;
				}

			}

			if(ansdx == -1)cout << "IMPOSSIBLE\n";
			else{

				cout << "POSSIBLE\n";

				forn(i,0,n){
					forn(j,0,n){
						cout << arr[v[ansdx][i]][j] << " ";
					}
					cout << endl;
				}

				v.clear();

			}

		}else{

			cout << "POSSIBLE\n";

			forn(i,0,n){
				forn(j,0,n){
					cout << arr[v[ansdx][i]][j] << " ";
				}
				cout << endl;
			}
		}


    	v.clear();


    }
    

    
    return 0;
}
  