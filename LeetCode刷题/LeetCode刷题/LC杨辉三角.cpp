//杨辉三角
//给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret;
		if (numRows >= 1) ret.push_back({ 1 });
		if (numRows >= 2) ret.push_back({ 1,1 });
		for (int i = 3; i <= numRows; i++) {
			vector<int> m;
			m.push_back(1);
			for (int j = 1; j < i - 1; j++) {
				m.push_back(ret[i - 2][j - 1] + ret[i - 2][j]);
			}
			m.push_back(1);
			ret.push_back(m);
		}
		return ret;
	}
};
