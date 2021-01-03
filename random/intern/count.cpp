#include <bits/stdc++.h>
 
using namespace std;
 
    long dp[210][210][210];

long calculate(int pos, int prev, int left, int k)// , long dp[210][210][])
{



    if (pos == k) {
        if (left == 0)
            return 1;
        else
            return 0;
    }


    if (left == 0)
        return 0;
 

    if (dp[pos][prev][left] != -1)

        return dp[pos][prev][left];
 

    long answer = 0;



    for (int i = prev; i <= left; i++) {

        answer += calculate(pos + 1, i,left - i, k );

    }
 

    dp[pos][prev][left] = answer;
    return answer;
}
 

long countWaystoDivide(int n, int k){
   
    // long dp[210][210][210];

    memset(dp, -1, sizeof(dp));

    return calculate(0, 1, n, k );
}
 
int main()
{

    int N = 8;

    int K = 4;
 
    cin >> N >> K;

    cout << countWaystoDivide(N, K);

    return 0;
}