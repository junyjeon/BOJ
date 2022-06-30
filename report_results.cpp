#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <map>
#include <set>

using namespace std;

map<string, int> id_index_map;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);

	map<string, int> id_index_map;

	map<string, set<string>> report_map;

	for (auto i = 0; i < id_list.size(); ++i)
		id_index_map[id_list[i]] = i;


	for (auto rep : report)
	{
		stringstream ss(rep);
		string from, to;
		ss >> from >> to;

		report_map[to].insert(from);
	}

	for (auto i : report_map)
		if (i.second.size() >= k)
		{
			for (auto in_i : i.second)
			answer[id_index_map[in_i]]++;
		}
    return answer;
}