//零矩阵
//编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。
class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		vector<vector<int>> m;
		int x = matrix.size();
		int y = matrix[0].size();
		for (int i = 0; i < x; ++i) {
			for (int j = 0; j < y; ++j) {
				if (matrix[i][j] == 0) {
					m.push_back({ i,j });
				}
			}
		}
		int msize = m.size();
		for (int i = 0; i < msize; ++i) {
			int k = m[i][0];
			int t = m[i][1];
			for (int j = 0; j < y; ++j) {
				matrix[k][j] = 0;
			}
			for (int p = 0; p < x; ++p) {
				matrix[p][t] = 0;
			}
		}
	}
};