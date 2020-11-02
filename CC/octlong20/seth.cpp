#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define loop(i,a,b) for(int i=a;i<b;i++)

bool power(int n,int count){
    int ans = 1;
    while(count--){
        ans*=2;
    }
    if(ans == n){
        return true;
    }else{
        return false;
    }
}

void printseq(int n){
    lli temp = n;
    lli count = 0;
    while(temp>1){ // 2 1 0
        temp/=2;
        count++;
    }
    // count--;
    lli k = 0;
    if(power(n,count)){
        cout << "pow\n";
        cout << "-1 " << endl;
        return ;
    }else{
        if(n>=3){
            cout << "2 3 1 ";
            lli i;
            k = 4;
            for(i=4;i<=n;i++){
                if(k == i){
                    k = k*2;
                    cout << (i+1) << " " << i << " ";
                    i+=1;
                }else{
                    cout << i << " ";
                }
            }
        }else if(n ==2){
                cout << "-1 ";
            }
            else if(n == 1){
                cout << "1" ;
            }
    }
    cout << endl;
}

int main() {
// your code goes here
int testcase;
cin >> testcase;
while(testcase--){
   int n;
   cin >> n;
   printseq(n);
}
return 0;
}