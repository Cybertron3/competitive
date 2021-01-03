
#include<bits/stdc++.h>
using namespace std;
// #define maxn 25
#define loop(i,a,b) for(int i=a;i<b;i++)



bool isCover(vector<int> gr[], int V, int k, int E, int maxn)
{
// Set has first 'k' bits high initially
	int set = (1 << k) - 1;

	int limit = (1 << V);

// to mark the edges covered in each subset
// of size 'k'
	bool vis[maxn][maxn];

	while (set < limit)
	{
// Reset visited array for every subset
// of vertices
		memset(vis, 0, sizeof vis);

// set counter for number of edges covered
// from this subset of vertices to zero
		int cnt = 0;

// selected vertex cover is the indices
// where 'set' has its bit high
		for (int j = 1, v = 1 ; j < limit ; j = j << 1, v++)
		{
			if (set & j)
			{
// Mark all edges emerging out of this
// vertex visited
				for (int k = 1 ; k <= V ; k++)
				{
					if (gr[v][k] && !vis[v][k])
					{
						vis[v][k] = 1;
						vis[k][v] = 1;
						cnt++;
					}
				}
			}
		}

// If the current subset covers all the edges
		if (cnt == E)
			return true;

// Generate previous combination with k bits high
// set & -set = (1 << last bit high in set)
		int c = set & -set;
		int r = set + c;
		set = (((r ^ set) >> 2) / c) | r;
	}
	return false;
}

// Returns answer to graph stored in gr[][]
int findMinCover(vector<int> gr[], int n, int m, int maxn)
{
// Binary search the answer
	int left = 1, right = n;
	while (right > left)
	{
		int mid = (left + right) >> 1;
		if (isCover(gr, n, mid, m, maxn) == false)
			left = mid + 1;
		else
			right = mid;
	}

	return left;
}


int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


	int x;
	vector<int> arr;
	while (true) {
		if (!(cin >> x)) {
			break; // exits the loop
		}
		arr.push_back(x);
	}
	int k = arr.back();
// cin >> k;
	arr.pop_back();
	int nodes = 0;
	int p ;
	for (p = 1; p < arr.size(); p++) {
		// nodes++;
		loop(m, p + 1, p + arr[p] + 1) {
			if (arr[m] > 0) nodes++;
		}
		p = p + arr[p];
	}
	nodes++;
	// cout << "Nodes : " << nodes << endl;
	int z = 1;
	int edges = nodes - 1;
	vector<int> grp[arr.size() + 1];

	for (p = 1; p < arr.size() + 1; p++) {

		loop(m, p + 1, p + arr[p] + 1) {
			if (arr[m] > 0) {
				grp[p].push_back(m);
				grp[m].push_back(p);
				// name++;
			}
		}
		p = p + arr[p];
	}

	bool flag = true;
	int cnt = 2;
	int ans = 0;
	for(int i = 0 ; i< arr.size() + 1 ; i++){
		if(!grp[i].empty()){
			ans++;
			if(grp[i].size() == 1){
				cnt++;
				if(cnt > 2){
					flag = false;
					break;
				}
			}else if(grp[i].size() > 2){
				flag = false;
				break;
			}
		}
	}

	if(flag){
		ans = (ans- 1)/3;
		ans++;
		cout << "sadf";
	}else{

		ans = findMinCover(grp, nodes, edges, arr.size() + 1);
	}
	
	if (ans <= k) {
		cout << ans << " Mission Successful" << endl;
	} else {
		cout << ans << " Mission Unsuccessful" << endl;
	}
	return 0;
}