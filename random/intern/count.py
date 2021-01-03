

dp = [[[0 for i in range(201)]  for j in range(201)] for k in range(201)]
 

def calculate(pos, prev, left, k):


    if (pos == k):

        if (left == 0):

            return 1;

        else:

            return 0;


    if (left == 0):

        return 0;

  


    if (dp[pos][prev][left] != -1):

        return dp[pos][prev][left];

  

    answer = 0;



    for i in range(prev,left+1):

        answer += calculate(pos + 1, i, 

                            left - i, k);

    dp[pos][prev][left] = answer;

    return dp[pos][prev][left];

  

def countWaystoDivide(n, k):

   


    for i in range(201):

        for j in range(201):

            for l in range(201):

                dp[i][j][l] = -1;

  

    return calculate(0, 1, n, k);

  
# Driver Code

if __name__ == '__main__':

    N = 200;

    K = 1;

  

    print(countWaystoDivide(N, K));

  