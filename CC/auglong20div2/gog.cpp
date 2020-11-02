vector<int> solve(vector<vector <int>> queries ){

	int xorr = 0;

	std::vector<pair<int , int>> list;

	for(int i = 0; i < (int)queries.size() ; i++){
		if(queries[i][0] == 0){
			list.push_back({queries[i][1] , xorr });

		}else{
			xorr = xorr ^ queries[i][1];

		}
	}

	std::vector<int> ans(list.size());

	for(int i = 0; i < list.size() ; i++){
		ans[i] = (list[i].First ^ list[i].Second ) ^ xorr; 
	}

	return ans;

}