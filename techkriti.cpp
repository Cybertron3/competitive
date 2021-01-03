#include<bits/stdc++.h>
using namespace std;

int main(){
    int i , n;
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int c=1, res=0;
    int P[n];
    
    for(i = 1; i < n ; i++){
        P[i] = nums[i] - nums[i-1];
    }
    for(i = 1; i < n-1; i++){
        if(P[i] == P[i+1]){
            c++;
        }else{
            c = 1;
        
            if(c > res){
                res = c;
            }
        }
    }

    if(c > res)res = c;
    
    cout << res + 1 << "\n";

    return 0;
}
