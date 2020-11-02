#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007
#define MAX_N 10001
 

bool visited2[MAX_N] = {0};
 
int indegree[MAX_N] = {0};
int represent_node[MAX_N] = {0};
 

int dfs2(int node, int representative , vector<int> graph[]) {
    visited2[node] = true;
    represent_node[node] = representative;
 
    for (int x: graph[node])
        if (!visited2[x])
            dfs2(x, representative , graph);
}
 
int main() {
    FIO;
    int t, n, m, k, i, j, ans ;
    cin >> t;
    while (t--> 0) {
        ans = 0;
        memset(indegree , 0 , sizeof(indegree));
        memset(visited2 , false , sizeof(visited2));
        memset(represent_node , 0 , sizeof(represent_node));

        
        cin >> n >> m;
        vector < int > graph[n+1]; 
 
 
        while (m--> 0) {
            cin >> j >> k;
            graph[j].push_back(k);
            graph[k].push_back(j);
           
        }
 
        int j = 0;
        while (++j <= n) {
            

            if (!visited2[j])
                dfs2(j, j , graph);

            
        }
 
        for (i = 1; i <= n; i++)
            for (int x: graph[i])
                if (represent_node[i] != represent_node[x])
                    indegree[represent_node[i]]++;
        
       
        

        for (i = 1; i <= n; i++)
            if (represent_node[i] == i)
                if(indegree[i] == 0)
                    ans++;
            

        cout << ans << "\n";
    }
    return 0;
} 