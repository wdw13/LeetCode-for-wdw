//LC 合并区间
//以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。
//请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。

class Solution {
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals) {
		int n = intervals.size();
		if (n == 1) {
			return intervals;
		}
		sort(intervals.begin(), intervals.end());
		int j = 0;
		vector<vector<int>> m;
		m.push_back(intervals[0]);
		for (int i = j + 1; i < intervals.size(); ++i) {
			if (intervals[i][0] <= m[j][1]) {
				m[j][1] = max(m[j][1], intervals[i][1]);
			}
			else {
				m.push_back(intervals[i]);
				j++;
			}
		}
		return m;
	}
};