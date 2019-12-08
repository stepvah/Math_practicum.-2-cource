#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include<queue>
#include<cstring>
#include<random>


using namespace std;

mt19937 rnd;

template<typename S>
auto select_random(const S &s, size_t n) {
	auto it = std::begin(s);
	// 'advance' the iterator n times
	std::advance(it, n);
	return it;
}


vector<vector<int>> a;



bool check(int i, int j) {
	for (int k = 0; k <= 27; k++) {
		if (a[i][k] == 1 && a[j][k] == 1) return true;
	}
	return false;
}

bool check1(int i, int j) {
	for (int k = 0; k <= 27; k++) {
		if (a[i][k] == 1 && a[j][k] == 1) return false;
	}
	return true;
}



int main() {
	int mi = 92;
	for (int r = 0; r < 10000; r++) {
		a.resize(28, vector<int>(28, 0));
		a[0][13] = 1; // 0   1     2    3     4    5    6   7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27
		a[0][14] = 1; // 12  13    14   15   16    17   18  23 24 25 26  27  28  34  35  36  37  38  45  46  47  48  56  57  58  67  68  78
		a[0][15] = 1;
		a[0][16] = 1;
		a[0][17] = 1;
		a[0][18] = 1;
		a[0][19] = 1;
		a[0][20] = 1;
		a[0][21] = 1;
		a[0][22] = 1;
		a[0][23] = 1;
		a[0][24] = 1;
		a[0][25] = 1;
		a[0][26] = 1;
		a[0][27] = 1;
		a[1][8] = 1;
		a[1][9] = 1;
		a[1][10] = 1;
		a[1][11] = 1;
		a[1][12] = 1;
		a[1][18] = 1;
		a[1][19] = 1;
		a[1][20] = 1;
		a[1][21] = 1;
		a[1][22] = 1;
		a[1][23] = 1;
		a[1][24] = 1;
		a[1][25] = 1;
		a[1][26] = 1;
		a[1][27] = 1;
		a[2][7] = 1;
		a[2][9] = 1;
		a[2][10] = 1;
		a[2][11] = 1;
		a[2][12] = 1;
		a[2][14] = 1;
		a[2][15] = 1;
		a[2][16] = 1;
		a[2][17] = 1;
		a[2][22] = 1;
		a[2][23] = 1;
		a[2][24] = 1;
		a[2][25] = 1;
		a[2][26] = 1;
		a[2][27] = 1;
		a[3][7] = 1;
		a[3][8] = 1;
		a[3][10] = 1;
		a[3][11] = 1;
		a[3][12] = 1;
		a[3][13] = 1;
		a[3][15] = 1;
		a[3][16] = 1;
		a[3][17] = 1;
		a[3][19] = 1;
		a[3][20] = 1;
		a[3][21] = 1;
		a[3][25] = 1;
		a[3][26] = 1;
		a[3][27] = 1;
		a[4][7] = 1;
		a[4][8] = 1;
		a[4][9] = 1;
		a[4][11] = 1;
		a[4][12] = 1;
		a[4][13] = 1;
		a[4][14] = 1;
		a[4][16] = 1;
		a[4][17] = 1;
		a[4][18] = 1;
		a[4][20] = 1;
		a[4][21] = 1;
		a[4][23] = 1;
		a[4][24] = 1;
		a[4][27] = 1;
		a[5][7] = 1;
		a[5][8] = 1;
		a[5][9] = 1;
		a[5][10] = 1;
		a[5][12] = 1;
		a[5][13] = 1;
		a[5][14] = 1;
		a[5][15] = 1;
		a[5][17] = 1;
		a[5][18] = 1;
		a[5][19] = 1;
		a[5][21] = 1;
		a[5][22] = 1;
		a[5][24] = 1;
		a[5][26] = 1;
		a[6][7] = 1;
		a[6][8] = 1;
		a[6][9] = 1;
		a[6][10] = 1;
		a[6][11] = 1;
		a[6][13] = 1;
		a[6][14] = 1;
		a[6][15] = 1;
		a[6][16] = 1;
		a[6][18] = 1;
		a[6][19] = 1;
		a[6][20] = 1;
		a[6][22] = 1;
		a[6][23] = 1;
		a[6][25] = 1;
		a[7][18] = 1;
		a[7][19] = 1;
		a[7][20] = 1;
		a[7][21] = 1;
		a[7][22] = 1;
		a[7][23] = 1;
		a[7][24] = 1;
		a[7][25] = 1;
		a[7][26] = 1;
		a[7][27] = 1;
		a[8][14] = 1;
		a[8][15] = 1;
		a[8][16] = 1;
		a[8][17] = 1;
		a[8][22] = 1;
		a[8][23] = 1;
		a[8][24] = 1;
		a[8][25] = 1;
		a[8][26] = 1;
		a[8][27] = 1;
		a[9][13] = 1;
		a[9][15] = 1;
		a[9][16] = 1;
		a[9][17] = 1;
		a[9][19] = 1;
		a[9][20] = 1;
		a[9][21] = 1;
		a[9][25] = 1;
		a[9][26] = 1;
		a[9][27] = 1;
		a[10][13] = 1;
		a[10][14] = 1;
		a[10][16] = 1;
		a[10][17] = 1;
		a[10][18] = 1;
		a[10][20] = 1;
		a[10][21] = 1;
		a[10][23] = 1;
		a[10][24] = 1;
		a[10][27] = 1;
		a[11][13] = 1;
		a[11][14] = 1;
		a[11][15] = 1;
		a[11][17] = 1;
		a[11][18] = 1;
		a[11][19] = 1;
		a[11][21] = 1;
		a[11][22] = 1;
		a[11][24] = 1;
		a[11][26] = 1;
		a[12][13] = 1;
		a[12][14] = 1;
		a[12][15] = 1;
		a[12][16] = 1;
		a[12][18] = 1;
		a[12][19] = 1;
		a[12][20] = 1;
		a[12][22] = 1;
		a[12][23] = 1;
		a[12][25] = 1;
		a[13][22] = 1;
		a[13][23] = 1;
		a[13][24] = 1;
		a[13][25] = 1;
		a[13][26] = 1;
		a[13][27] = 1;
		a[14][19] = 1;
		a[14][20] = 1;
		a[14][21] = 1;
		a[14][25] = 1;
		a[14][26] = 1;
		a[14][27] = 1;
		a[15][18] = 1;
		a[15][20] = 1;
		a[15][21] = 1;
		a[15][23] = 1;
		a[15][24] = 1;
		a[15][27] = 1;
		a[16][18] = 1;
		a[16][19] = 1;
		a[16][21] = 1;
		a[16][22] = 1;
		a[16][24] = 1;
		a[16][26] = 1;
		a[17][18] = 1;
		a[17][19] = 1;
		a[17][20] = 1;
		a[17][22] = 1;
		a[17][23] = 1;
		a[17][25] = 1;
		a[18][25] = 1;
		a[18][26] = 1;
		a[18][27] = 1;
		a[19][23] = 1;
		a[19][24] = 1;
		a[19][27] = 1;
		a[20][22] = 1;
		a[20][24] = 1;
		a[20][26] = 1;
		a[21][22] = 1;
		a[21][23] = 1;
		a[21][25] = 1;
		a[22][27] = 1;
		a[23][26] = 1;
		a[24][25] = 1;
		for (int i = 0; i <= 27; i++) {
			for (int j = 0; j <= 27; j++) {
				if (a[i][j] == 1) a[j][i] = 1;
			}
		}
		set<pair<int, int>> s;
		for (int i = 0; i <= 27; i++) {
			for (int j = i; j <= 27; j++) {
				if (a[i][j] == 1) {
					s.insert({ i, j });
				}
			}
		}
		set<pair<int, int>> s1;
		while (s.size() > 0) {
			auto r = rnd() % s.size();
			auto n = *select_random(s, r);
			if (check(n.first, n.second)) {
				a[n.first][n.second] = 2;
				a[n.second][n.first] = 2;
				s1.insert(n);
			}
			s.erase(n);
		}
		while (s1.size() > 0) {
			auto r = rnd() % s1.size();
			auto n = *select_random(s1, r);
			if (check1(n.first, n.second)) {
				a[n.first][n.second] = 1;
				a[n.second][n.first] = 1;
			}
			s1.erase(n);
		}
		int ans = 0;
		for (int i = 0; i <= 27; i++) {
			for (int j = i; j <= 27; j++) {
				if (a[i][j] == 1) ans++;
			}
		}
		if (mi > ans) {
			cout << ans << '\n';
			mi = ans;
			for (int i = 0; i < 28; i++) {
				for (int j = 0; j < 28; j++) {
					cout << a[i][j] << ' ';
				}
				cout << '\n';
			}
		}
	}
	cout << mi << endl;
	system("pause");
	return 0;
} 