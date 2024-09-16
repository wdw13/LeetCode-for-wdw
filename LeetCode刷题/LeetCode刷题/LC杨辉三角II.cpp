//杨辉三角II
//给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。
class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> result(rowIndex + 1, 1);
		if (rowIndex < 2)
		{
			return result;
		}
		// 需要进行迭代的次数
		for (int i = 1; i < rowIndex; i++)
		{
			// 每次迭代进行的计算
			for (int j = i; j > 0; j--)
			{
				result[j] = result[j] + result[j - 1];
			}
		}
		return result;
	}
};