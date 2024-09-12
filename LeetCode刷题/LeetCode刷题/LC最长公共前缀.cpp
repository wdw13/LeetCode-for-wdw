//最长公共前缀
//编写一个函数来查找字符串数组中的最长公共前缀。
//如果不存在公共前缀，返回空字符串 ""。
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string a = strs[0];
		for (int i = 0; i < strs.size(); ++i) {
			for (int j = 0; j < a.size(); ++j) {
				if (a[j] != strs[i][j]) {
					a.erase(j);
				}
			}
		}
		return a;
	}
};