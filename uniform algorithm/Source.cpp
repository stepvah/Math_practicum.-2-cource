#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<pair<int, int>> sets(0);
vector<vector<int>> graph;


bool check1(pair<int, int> one, pair<int, int> two) {
	if (one.first != two.first && one.second != two.second && one.first != two.second && one.second != two.first) {
		return true;
	}
	return false;
}


bool check2(int one, int two) {
	if (graph[one][two] == 1) return false;
	for (int i = 0; i < graph.size(); i++) {
		if (graph[one][i] == 1 && graph[two][i] == 1) return false;
	}
	return true;
}


int main() {
	int n = 11; // k = 2
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			sets.push_back({i, j});
		}
	}
	int num = sets.size();
	graph.resize(num, vector<int>(num));
	set<pair<int, int>> deg;

	for (int i = 0; i < num; i++) {
		deg.insert({ 0, i });
	}

	while (deg.size() != 0) {
		pair<int, int> cur = *deg.begin();
		int d = cur.first;
		int v = cur.second;
		deg.erase(cur);
		for (auto u : deg) {
			if (check1(sets[v], sets[u.second])) {
				if (check2(v, u.second)) {
					graph[v][u.second] = 1;
					graph[u.second][v] = 1;
					deg.erase(u);
					deg.insert({ u.first + 1, u.second });
					deg.insert({ d + 1, v });
					break;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < num; i++) {
		for (int j = i; j < num; j++) {
			if (graph[i][j] == 1) ans++;
		}
	}
	cout << ans << '\n';
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << graph[i][j] << ' ';
		}
		cout << '\n';
	}
	system("pause");
}