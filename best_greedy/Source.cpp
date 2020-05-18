#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> graph;

struct p {
	int first;
	int second;
};

vector<p> sets(0);

bool check1(p one, p two) {
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
	int n = 9; // k = 2
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			sets.push_back({ i, j});
		}
	}
	int num = sets.size();
	graph.resize(num, vector<int>(num));
	set<pair<int, int>> deg;
	vector<int> degree(num);

	for (int i = 0; i < num; i++) {
		deg.insert({ 0, i });
		degree[i] = 0;
	}

	while (deg.size() != 0) {
		pair<int, int> cur = *deg.begin();
		int d = cur.first;
		int v = cur.second;
		deg.erase(cur);
		for (int i = num - 1; i >= 0; i--) {
			if (check1(sets[v], sets[i])) {
				if (check2(v, i)) {
					graph[v][i] = 1;
					graph[i][v] = 1;
					deg.erase({degree[i], i});
					deg.insert({ degree[i] + 1, i });
					degree[i]++;
					degree[d]++;
					deg.insert({ d + 1, v });
					degree[v]++;
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