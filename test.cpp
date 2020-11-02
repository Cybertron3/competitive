#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define loop(i,a,b) for(int i=a;i<b;i++)

int coins(vector<vector<int>> arr){
    int len = arr.size();
    int var = len;
    int max = INT_MIN;
    int row = 0,col = 0;
    while(var--){
        int i=row,j=col;
        int sum = 0;
        while(i<len && j<len){
            sum+=arr[i][j];
            i++; j++;
        }
        if(max < sum){
            max = sum;
        }
        row++;
    }
    col = 1,row = 0;
    var = len;
    while(var--){
        int i=row,j=col;
        int sum = 0;
        while(i<len && j<len){
            sum+=arr[i][j];
            i++;j++;
        }
        if(max < sum){
            max = sum;
        }
        col++;
    }
    return max;
}

int main() {
// your code goes here
int testcase;
cin >> testcase;
int test = testcase;
while(testcase--){
   int n;
   cin >> n;
   int temp = n;
   vector<vector<int> > vec;
        for(int z=0;z<n;z++){
            cout << z << "\n";
            vector<int> box;
            int val;
            loop(i,0,n){
            cin >> val;
            box.push_back(val);
            }
            // cout << "Exec: " <<endl;
            vec.push_back(box);
            // cout << " temp: " << temp << endl;
        }
        cout << "Test__scan_compelete";
        int answer = coins(vec);
        cout << answer << endl;
}
return 0;
}